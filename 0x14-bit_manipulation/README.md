# C - Bit manipulation

This is a programming project that requires implementing code in C language. The project has a set of requirements that need to be followed to ensure proper execution and functionality of the code. In this project, we aim to create a set of functions that are limited to using only the C standard library functions like malloc, free, and exit. We cannot use any other functions like printf, puts, calloc, realloc, etc. The only exception is the `_putchar` function, which we are allowed to use.

## Requirements

### General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use `_putchar`
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
* Don’t forget to push your header file
* All your header files should be include guarded

## File Structure

The project should have the following structure:

```
.
├── main.h
├── file1.c
├── file2.c
├── ...
├── filen.c
├── README.md
└── requirements.txt
```

## Installation

To install this project on your local machine, please follow these steps:

1. Clone the repository to your local machine using `git clone https://github.com/your-username/your-repo.git`
2. Install the required libraries and dependencies by running `pip install -r requirements.txt`
3. Compile the C code using the command `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o executable` where `executable` is the name you want to give to the compiled code.
4. Run the code by executing the command `./executable`.

## Usage

This project is designed to be used as a set of C functions. You can use these functions in your own C projects by including the header file `main.h` in your source code.

## Credits

This project was created by [Solomon Offei]. If you have any questions or suggestions, please feel free to contact me at [Solomonwright9@gmail.com].
