# <a href="https://github.com/Manga08/simple-shul"><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/4/4b/Bash_Logo_Colored.svg/1200px-Bash_Logo_Colored.svg.png" alt="Sin-ti-tulo-1" width="60" height="60" border="0"></a> Simple shell

A simple UNIX command interpreter that provides a user interface to access and give orders to the operating system.

[![N|Solid](https://lh3.googleusercontent.com/proxy/2HXz0jssqnR8UlxW-L4WhobBnk6O5QIBTWoUo0sv31Fbfb1pQBGFdzjZeH4UC2OCy-109f4onDje0o4eKvmSPPUYL2RQ8CSkAkJEMXcbutDOWFb-FZOdlbJZwckfRr0Eqrh2hEhSZwgnCPvzAkSoJRAj50s)](https://github.com/Manga08/simple-shull)

## Table of contents
* [Requirements](#requirements)
* [Instalation](#instalation)
* [Compilation](#compilation)
* [Written in](#written-in)
* [Example of use](#example-of-use)
* [Files and functions](#files-and-functions)
* [Authors](#authors)
## Requirements
* Ubuntu 14.04 LTS
* gcc version 4.8.4
## Instalation
*  Clone this repository:
```sh
git clone https://github.com/Manga08/simple_shell.git
```
* Inside the repository, compile.
* Execute:
```sh
./hsh
```
* Or run in non-interactive mode, in this mode:
```sh
echo "ls" | ./hsh
```
## Compilation
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## Written in
* GNU Emacs 24.3.1
* C language
## Example of use
* Run an executable:
```sh
$ /bin/pwd
```
* Run an executable founded in the $PATH environment variable:
```sh
$ pwd
```
All commands and builtins that you can use are in the manual page.
## Files and functions
* [main.c](main.c) - File where all the main functions are called
  * `signalhandler` - The ignore CTRL + C command.
  * `exit_func` - Exit of the shell.
  * `_exec` - Execution of process.
  * `f_error` - Process errors.
* [_getline.c](_getline.c) - File where are there own getline function
  * `cpy` - Copy a string.
  * `_realloc` - Reallocs the getline arguments.
  * `_readchar` - Custom getline currently reads 1 char at a time from a file descriptor.
  * `_getline` - Custom getline.
* [_malloc.c](_malloc.c) - File where are there own malloc cases and free
  * `_malloc` - Mallocs memory of size bytes, prints error message on error.
  * `_free` - Free and set to null the pointer.
* [path.c](path.c) - File where are the path
  * `_getenv` - Get the enviroment variable.
  * `path` - Get the command line and give the adrres  of the command.
* [print_error.c](print_error.c) - File where are the print error cases
  * `print_error` - Print error cases.
  * `_perror` - Custom perror.
* [_putchar.c](_putchar.c) - Writes the character c to stdout
* [simple_shell.h](simple_shell.h) - The header file
* [strfunc.c](strfunc.c) - List of their own functions.
  * `_strtok` - Tokenizes a string.
  * `_atoi` - Convert a string to an integer.
  * `_strcmp` - Compare two strings.
  * `_strlen` - Calculate the length of a string.
* [strfunc2.c](strfunc2.c) - List of their another own functions.
  * `_strchr` - Locate character in string.
  * `print_number` - Prints a integer with purchar.
  * `_strstr` - Locate a substring.
  * `str_concat` - Print a reverse string.
  * `_strdup` - Prints the array reverse.
### Authors
 - [Manuel Acero](https://github.com/Manga08)
 - [Santiago Trujillo](https://github.com/thiago1623)
 
