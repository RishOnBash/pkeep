# pkeep

A lightweight, terminal-based password manager and generator written in C. Designed for efficiency in **Termux** and Unix-like environments.

> Note: This script stores passwords in plaintext for simplicity and educational purposes. **Use with caution**.

## 🛠 Features

- **Secure Storage**: Save account credentials with a minimum 8-character password enforcement.
- **Quick View**: Display all saved credentials directly in the terminal.
- **Generator**: Create 12-character alphanumeric strings using OpenSSL's secure random source.

## 🚀 Installation & Build
Ensure you have `gcc`, `make`, and `openssl` installed in your environment.

# Clone the repository

```bash
git clone https://github.com/RishOnBash/pkeep.git
cd pkeep
```

# Build the project using the Makefile

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

## TODO
- **Search**: Find specific account details using case-sensitive string matching.

## License
MIT
