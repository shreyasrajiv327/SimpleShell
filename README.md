

# Simple Shell

Welcome to Simple Shell! This project is a simple Unix-like command line interpreter implemented in C. It supports executing basic commands, redirection to files, and includes several built-in commands.

## Features

- **Interactive Mode**: Allows you to type commands and see results in real-time.
- **Non-Interactive Mode**: Executes commands from a file or script.
- **Redirection**: Supports output redirection to files using `>`.
- **Built-in Commands**:
  - `cd`: Change the working directory.
  - `env`: Display the environment variables.
  - `exit`: Exit the shell.
  - `help`: Display help information.

## Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/shreyas-shell.git
   ```

2. Navigate to the project directory:
   ```sh
   cd shreyas-shell
   ```

3. Compile the project:
   ```sh
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
   ```

## Usage

### Interactive Mode

To start the shell in interactive mode, simply run:

```sh
./hsh
```

You will see a welcome message and can start typing commands.

### Non-Interactive Mode

To execute a script or commands from a file, use:

```sh
./hsh < scriptfile
```

### Output Redirection

You can redirect the output of a command to a file using:

```sh
command > output.txt
```

If `output.txt` does not exist, it will be created.

## Built-in Commands

### `cd`

Change the working directory.

```sh
cd directory_name
```

### `env`

Display the environment variables.

```sh
env
```

### `exit`

Exit the shell.

```sh
exit
```

### `help`

Display help information.

```sh
help
```

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.
