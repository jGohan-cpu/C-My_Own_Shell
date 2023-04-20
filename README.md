![animated banner](https://github.com/jGohan-cpu/holbertonschool-simple_shell/edit/master/README.md)
<p align="center">
  <img src="https://github.com/jGohan-cpu/holbertonschool-simple_shell/edit/master/README.md" width="500" height="200">
</p>


## **:clipboard: Table of Contents**
1. [Introduction](#introduction)
2. [Sypnosis](#sypnosis)
3. [Project](#Project)
  - General Requirements
  - Functions and system calls used
  - Description of each file
    - Description of helper files
  - Environment
  - Compilation
  - Testing
    - Interactive
    - Non-Interactive
    - Sample usage
    - Stop and return to your original shell
  - Project Tasks
4. [Project Documentation](#documentation)
5. [Authors](#authors)

## Introduction
 * In this project we coded from scratch a simple Unix shell.
  
  * But what is a shell?
    
    A shell is an interactive command line interpreter. Which allows user's to type in a defined set of commands (e.g. "rm" to remove files, "cat" to combine word documents, etc) and have the operating system run the appropriate function. It is slightly different from a graphical user interface (GUI). For instance, instead of using a mouse to click to open folders and delete files, a user can type in a command (i.e. "ls" or "rm") and have the files be displayed or modified in a list on the command line. GUI and CLI both have the same purpose to interact with the operating system but their input methods are different and some developers prefer the CLI to interact with the shell because their typing is quicker than clicking and dragging.
    
## Sypnosis

  This repository holds all the code necessary for our custom simple shell to run. Our shell currently handles the executions of executables found in the environmental variable PATH, with or without their full paths.
  
## Project

### General Requirements
  
  - Allowed editors: vi, vim, emacs
  - All the files should end with a new line
  - A README.md file, at the root of the folder of the project is mandatory
  - The shell should not have any memory leaks
  - No more than 5 functions per file
  - All the header files should be include guarded
  - The se system calls should be only when needed to
  
### Functions and system calls used
  
### Description of each file

#### Description of helper files

### Environment
  - Language: C
  - OS: Ubuntu 20.04
  - Compiler: gcc
  - Style guideines: Betty Style
    
### Compilation
  - All of our files will be compiled using:

    - `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`
  
### Testing
  
   -You can test our custom version of the shel in the interactive and non-interactive mode.
    
#### Interactive
  - The shell should work like this in interactive mode:
    
  ```bash
  $ ./hsh
  ($) /bin/ls
  hsh main.c shell.c
  ($)
  ($) exit
  $
  ```
    
#### Non-Interactive

  -In the non-interactive mode should work like this:
  
      
    $ echo "/bin/ls" | ./hsh
    hsh main.c shell.c test_ls_2
    $
    $ cat test_ls_2
    /bin/ls
    /bin/ls
    $
    $ cat test_ls_2 | ./hsh
    hsh main.c shell.c test_ls_2
    hsh main.c shell.c test_ls_2
    $
    

#### Sample usage

  - This is a simple explame of what and how can you do some commands in our custom shell:
    
    ```bash
    $ echo "This is a pretty cool!"
    This is pretty cool!
    $ man ./man_1_simple_shell (opens our manpage for more information)
    ```

#### Stop and return to your original shell

  - To stop our shell and return to your original shell you should type the command:
    
    ```bash
    $ exit
    (your_terminal)$
    ```
  
    
## Project Tasks

## Project Documentation

## Authors
