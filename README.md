# simple_shell 💻

## Description
This program is shell-based, that is, it behaves like a command line interpreter. Like Shell, this program receives input, interprets it for the operating system, and manages the output.

## Usage
1. Clone the repository:
    ```
    git clone https://github.com/yuriquezada/simple_shell.git
    ```
2. Locate ourselves in the root folder of the directory.
    
3. Inside the simple_shell folder, run the following command:
    ```
    valgrind  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell
    ```
4. Finally run the program by typing the following:
    ```
    ./shell
    ```
    The output of the new shell is the following:
    ```
    julien@ubuntu:~/shell$./shell
    $
    ```
## Project structure

| File | Description |
| --- | --- |
| `README.md` | Contains summary and key information about this project. |
| `AUTHORS` | List all the people who have contributed content to the repository |
| `man_1_simple_shell` | Display the user manual of any command that we can run on the terminal. It provides a detailed view of the command which includes NAME, SYNOPSIS, DESCRIPTION, BUGS, SEE ALSO, NOTES, and AUTHORS |
| `hack/generate-authors.sh` | Generates the list of project authors |
| `shell` | Allows us to run the new Shell |
| `file.h` | Contains C function declarations and macro definitions to be shared between several source files |
| `main.c` | Contains our ``main()`` function |
| `tokenizer.c` | It receives an input in the shell and identifies each value entered |
| `matcher.c` | Relates the input entered with the function to be executed in shell |
| `prints.c` | Prints the octal unsigned integer conversion |
| `free.c` | Contains the function to free up memory |
| `env.c` | Prints the environment of the current process |
## Authors ✏️

Rayd Trujillo - [rayd1893](https://github.com/rayd1893)

Yuri Quezada - [yuriquezada](https://github.com/yuriquezada)
