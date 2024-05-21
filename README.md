# Minishell
![C](https://img.shields.io/badge/language-C-blue)
![Shell](https://img.shields.io/badge/technology-Shell-red)
![42School](https://img.shields.io/badge/school-42-orange)

## Table of Contents
- [Introduction](#introduction)
- [Important Concepts](#important-concepts)
- [Key Learning Outcomes](#key-learning-outcomes)
- [Objectives](#objectives)
- [Common Instructions](#common-instructions)
- [Project Requirements](#project-requirements)
- [Installation / Compile / Run](#installation--compile--run)
- [Example Usage](#example-usage)
- [Additional Resources](#additional-resources)

## Introduction
This project involves creating a simple shell interface similar to bash. It introduces fundamental concepts of Unix programming, including process creation and control, signal handling, and implementing built-in shell commands. By building a basic shell, practical experience is gained in handling user inputs, managing system calls, and process management.

## Important Concepts
- 🐚 **Shell Basics**: Understand the core functionalities of a Unix shell:
  - **Command Execution**: Running programs based on user inputs.
  - **Built-in Commands**: Implementing essential commands within the shell itself.
  - **Signal Handling**: Managing interrupts and signals from the operating system.
  - **Pipelines and Redirection**: Handling complex command structures and I/O redirections.

## Key Learning Outcomes
- 🔄 **Process Management**: Learn how to create and manage processes using fork, exec, and wait system calls.
- 📜 **Command Parsing**: Develop skills to parse and interpret user commands.
- ⚙️ **Signal Handling**: Implement signal handling to manage process interruptions and terminations.
- 🧩 **Problem Solving**: Apply theoretical knowledge to solve practical issues in shell implementation.

## Objectives
- 🖥️ **Basic Shell Functions**: Create a prompt to display and accept user inputs.
- 🔄 **Execution Flow**: Implement a loop to read, parse, and execute commands until an exit command is given.
- 📜 **Built-in Commands**: Include common built-ins like `cd`, `echo`, `pwd`, `export`, `unset`, `env`, and `exit`.
- 🔧 **Redirections and Pipes**: Implement input/output redirections and pipelines.
- 🛠️ **Error Handling**: Gracefully handle errors and edge cases.

## Common Instructions
- 📜 This project is written in C and adheres to the 42 Norm.
- 🚫 Handles all heap-allocated memory properly to avoid leaks.
- 📄 Provides a Makefile with the rules: `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- ❌ Global variables are forbidden.
- 🛠️ Programs do not quit unexpectedly and manage errors gracefully.

## Project Requirements
This shell program should support:
1. **Prompt Display**: Display a prompt and wait for user input.
2. **Command Execution**: Execute commands and built-in shell commands.
3. **Redirections**: Handle input (`<`) and output (`>`, `>>`) redirections.
4. **Pipes**: Implement pipes (`|`) to pass output of one command as input to another.
5. **Signals**: Handle signals like `Ctrl+C` and `Ctrl+D`.

## Installation / Compile / Run
1. ⬇️ Clone the repository:
    ```sh
    git clone https://github.com/yourusername/minishell.git
    cd minishell
    ```
2. 🔧 Compile the project:
    ```sh
    make
    ```
3. ▶️ Run the shell:
    ```sh
    ./minishell
    ```

## Example Usage
▶️ Example session with the shell:
```bash
   minishell> echo Hello, World!
   minishell> cd ..
   minishell> pwd
   minishell> ls -l | grep minishell > output.txt
   ```

## Additional Resources
- [Unix Shells](https://www.gnu.org/software/bash/manual/bash.html)
- [Process Management](https://man7.org/linux/man-pages/man2/fork.2.html)
- [Signal Handling](https://man7.org/linux/man-pages/man2/signal.2.html)
- [Redirections and Pipes](https://tldp.org/LDP/abs/html/io-redirection.html)

