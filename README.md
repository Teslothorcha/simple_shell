<div align ="center">
<img src="https://i.ibb.co/LkH3RWM/logo.png" alt="logo" border="0" height="320" width="280">
</div>

# Simple-Shell

simple-shell is a interpreter command-line between kernel and the user mode for it can use the resources of the Operative System. This program is done, how final project of trimester of Holberton school for consolidate the theory and practice of the C programming language.  

<img src="https://i.ibb.co/6RBnX9N/commands.png" alt="commands" border="0">

### Functions

| **File** | **Description** |
|----------|-----------------|
| holberton.h | Contain all the libraries and functions created by us |
| aux_func.c | **handler** - handles ctrl + c signal,  **exec_path** - check if executable exists on directory |
| error.m_.c | **error_message** - compose the standar error message, **error_helper** - sends char to write |
| free_.c | **free_em_all** - will free double pointer, **print_env** - prints all of the environment variables to the output, **free_listint** - free list and sets head to NULL |
| get_path |  **get_path** - will searh if command exist on any of PATH's directories |
| list_maker.c |   **list_maker** - add node initialize it and give it a string, **free_list** - free list and sets head to NULL, **listint_len** - list nodes of a list |
| shell_1.c |   **shell_1** - Initiliaze the proccess and execute |
| shell_.c | **main** - Initialization of the shell! |
| s_strings.c | **s_strdup** - duplicate a string, **s_length** - determine lenght of string, **s_strcopy** - copy n bytes from one string to another, **strcmpn** - compares n bytes in two strings **slash** - append slash and comannd to directory in linked list
  | tokenizer.c | **tokens** - Divide a string with delimiter into tokens

## Objectives

- [x] manpage - Technical manual about the simple shell
- [x] Display:
* The posible command to enter "ls"
* Wait and hear to other command for example; "pwd"
* After the mini-shell follow a new line "\n".

- [x] Print the $ at the init for know if is inside of the shell and after wait to the follow command, if the user doesn't write exit or EOF.
- [x] If executable not is found with stat, print a error message and return error with POSIX.
- [x] Handle errors in case that some function fail to execute
- [x] Handle the EOF "End of File" the which verify
- [x] Handle mode non-interactive
- [x] exit builtin - It does that the program end the proccess
- [x] env builtin that print the current enviroment

## Requeriments

* Ubuntu 14.04 LTS or greater
* gcc 4.8.4

### Install


1. Clone this repository: git clone "https://github.com/Teslothorcha/simple_shell"
2. Change directories into the repository: cd simple_shell
3. Compile: gcc with flags
4. Execute ./nameofexecutable

<img src="https://i.ibb.co/1nzQ612/Install.png" alt="Install" border="0">


#### Modes of execute shell

##### Interactive mode:

<img src="https://i.ibb.co/J55NBNV/Interactive-mode.png" alt="Interactive-mode" border="0">

##### Non-Interactive mode:

<img src="https://i.ibb.co/0XV1BBm/Non-Interactive.png" alt="Non-Interactive" border="0">

### Blog

*  What happens when you type ls -l in the shell:

https://medium.com/@ToqYang/what-happens-when-you-type-ls-l-in-the-shell-d28b88e70ae1?source=friends_link&sk=f91a8687d9b25b68d1788259faa950b5

#### How make your own ManPage

https://medium.com/@ToqYang/how-write-your-own-manpage-d0d3b6528775?source=friends_link&sk=751b24abdf5878af303f7f2f6a753d1f


### Flow Chart

<img src="https://i.ibb.co/FJXkprL/My-First-Board.jpg" alt="My-First-Board" border="0">

## Social

**Juan David
 [@Teslothorcha](https://twitter.com/Teslothorcha) [![Twitter Follow](https://img.shields.io/twitter/url/https/github.com/tterb/hyde.svg?style=social)](https://twitter.com/Teslothorcha)**

**Santiago Yanguas
 [@TYGames3](https://twitter.com/TYGames3) [![Twitter Follow](https://img.shields.io/twitter/url/https/github.com/tterb/hyde.svg?style=social)](https://twitter.com/TYGames3)**