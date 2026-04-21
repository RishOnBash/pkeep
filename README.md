# pkeep

A lightweight, terminal-based password manager and generator written in C. Designed for efficiency in **Termux** and Unix-like environments.

> Note: This script stores passwords in plaintext for simplicity and educational purposes. **Use with caution**.

## 🛠 Features

- **Secure Storage**: Save account credentials with a minimum 8-character password enforcement.
- **Quick View**: Display all saved credentials directly in the terminal.
- **Generator**: Create 12-character alphanumeric strings using OpenSSL's secure random source.

## 🚀 Installation & Build
Ensure you have `gcc`, `make`, and `openssl` installed in your environment.

## Clone the repository

```bash
git clone https://github.com/RishOnBash/pkeep.git
cd pkeep
```

## Compile
```
make
```

## Usage
```
Flag       Description
-s         Save: Prompts for account name and password.
-v         View: Lists all entries in the password file.
-g         Generate: Outputs 5 random alphanumeric strings.
```

## Usage example
```
$ ./pkeep -s
Enter account: Reddit
Enter password: Reddit@123
INFO: Password saved successfuly.

$ ./pkeep -v
Reddit
 Password: Reddit@123
------------------------------------------

$ ./pkeep -g
Generating random strings...

rIrrkXiD16a8
qheiK1D8Hqfj
w28RZhcy0WgY
J1EhIXCZ4cyf
95tdb4WXe24N
```

## TODO
- **Search**: Find specific account details using case-sensitive string matching.

## License
MIT
