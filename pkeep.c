#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FILENAME "./.password-file"

/* 
 * simple password manager
 * remake of passgen script (bash)
 *
 * Author:  Rish
 * Date:    April 21, 2026
 * License: MIT
 */
    
int main(int argc, char *argv[]) {
    char account [25];
    char password [50];
    if (argc < 2) {
        printf ("Usage: %s [Option]\n", argv[0]);
        puts ("Options:");
        puts (" -s      (s)aves password to file");
        puts (" -v      (v)iew password file");
        puts (" -g      (g)enerate random alphanumeric strings");
        return 1;

    } else if (strcmp(argv[1], "-s") == 0) {
        // get password from STDIN
        printf ("Enter account: ");
        fgets (account, sizeof(account), stdin);
        printf ("Enter password: ");
        scanf ("%49s", password);
        if (strlen(password) < 8) {
            puts ("Password needs to be 8 characters or more!");
            return 1;
        }
        // open file in append mode if file does'nt exist create
        FILE *fp = fopen(FILENAME, "a");

        if (fp == NULL) {
            puts ("ERROR: Could not access file");
            return 1;
        }

        fprintf (fp, "%s Password: %s\n", account, password);
        fputs ("-------------------------------------------\n", fp);
        fclose(fp);
        puts ("INFO: Password saved successfuly.");
        return 0;

    } else if (strcmp (argv [1], "-v") == 0) {
        FILE *fp = fopen(FILENAME, "r");

        if (fp == NULL) {
            puts ("ERROR: Could not access file");
            return 1;
        }

        char buffer [255];
        while (fgets (buffer, sizeof(buffer), fp)) {
            printf ("%s", buffer);
        }
        fclose(fp);
        return 0;

    } else if (strcmp (argv[1], "-g") == 0) {
        puts ("Generating random strings...\n");
        for (int i=0; i<5; i++) {
            // requires Unix based system for this to work
            system("openssl rand -base64 15 | tr -d [:punct:] | cut -c1-12");
        }
    } else {
        printf ("Usage: %s [Option]\n", argv[0]);
        puts ("Options:");
        puts (" -s      (s)aves password to file");
        puts (" -v      (v)iew password file");
        puts (" -g      (g)enerate random alphanumeric strings");
        return 1;
    }
    return 0;
}
