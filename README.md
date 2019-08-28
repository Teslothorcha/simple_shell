# Shell

Shell is a interpreter command-line interpreter between kernel and the user, created to late of 1960s, Bell Laboratories, to Dennis Rithie and Ken Thompson and Brian Kernighan based on Multic O.S. It was though for they can bring computer to student university.

<img src="https://i.ibb.co/fFKF6nz/pr.png" alt="pr" border="0">

### Functions

* aux_func.c
   * handler - handles ctrl + c signal
   * exec_path - check if executable exists on directory
* error.m_.c
   * error_message - compose the standar error message
   * error_helper - sends char to write
* free_.c
   * free_em_all - will free double pointer
   * print_env - prints all of the environment variables to the output
   * free_listint - free list and sets head to NULL
* get_path
  * get_path - will searh if command exist on any of PATH's directories
* holberton.h - Find all the headers and libraries
* list_maker.c
  * list_maker - add node initialize it and give it a string
  * free_list - free list and sets head to NULL
  * listint_len - list nodes of a list
* shell_1.c
  * shell_1 - part two of main function
  * main - Initialization of the shell!
* s_strings
  * s_strdup - duplicate a string
  * s_length - determine lenght of string
  * s_strcopy - copy n bytes from one string to another
  * strcmpn - compares n bytes in two strings
  * slash - append slash and comannd to directory in linked list
* tokenizer.c
  * tokens - Divide a string with delimiter into tokens

## Tasks

#####  README, man, AUTHORS mandatory

*    Write a README
*    Write a man for your shell.
*    You should have an AUTHORS file at the root of your repository.

#####  Betty would be proud mandatory

Write a beautiful code that passes the Betty checks

#####  Write a UNIX command line interpreter.

Your Shell should:

* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
*    The prompt is displayed again each time a command has been executed.
*    The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
*    The command lines are made only of one word. No arguments will be passed to programs.
*    If an executable cannot be found, print an error message and display    the prompt again.
*    Handle errors.
*    You have to handle the “end of file” condition (Ctrl+D)

#####  Simple shell 0.2

Simple shell 0.1 +

*    Handle command lines with arguments

##### Simple shell 0.3 +

*    Implement the exit built-in, that exits the shell
*    Usage: exit
*    You don’t have to handle any argument to the built-in exit

##### Simple shell 1.0 mandatory

Simple shell 0.4 +

*   Implement the env built-in, that prints the current environment

### Blog

*  What happens when you type ls -l in the shell:

https://medium.com/@ToqYang/what-happens-when-you-type-ls-l-in-the-shell-d28b88e70ae1?source=friends_link&sk=f91a8687d9b25b68d1788259faa950b5

#### How make your own ManPage

https://medium.com/@ToqYang/how-write-your-own-manpage-d0d3b6528775?source=friends_link&sk=751b24abdf5878af303f7f2f6a753d1f

## Requeriments

All your files will be compiled on Ubuntu 14.04 LTS
Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

It is checked using betty-style.pl and betty-doc.pl

### Install


1. Clone this repository: git clone "https://github.com/Teslothorcha/simple_shell"
2. Change directories into the repository: cd simple_shell
3. Compile: gcc with flags

<img src="https://i.ibb.co/nPR1nJS/compilation.png" alt="compilation" border="0">

#### Modes of execute shell


<img src="https://i.ibb.co/GsNqy27/mode.png" alt="mode" border="0">

## Social

**Juan David
 [@Teslothorcha](https://twitter.com/Teslothorcha) [![Twitter Follow](https://img.shields.io/twitter/url/https/github.com/tterb/hyde.svg?style=social)](https://twitter.com/Teslothorcha)**

**Santiago Yanguas
 [@TYGames3](https://twitter.com/TYGames3) [![Twitter Follow](https://img.shields.io/twitter/url/https/github.com/tterb/hyde.svg?style=social)](https://twitter.com/TYGames3)**