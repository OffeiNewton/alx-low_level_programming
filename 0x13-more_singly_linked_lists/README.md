C - More singly linked lists in C

This project focuses on understanding and implementing singly linked lists in C programming language. It covers the following topics:

When and why to use linked lists versus arrays Building and using linked lists Implementation of linked lists using the list_t structure Requirements Allowed editors: vi, vim, emacs All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 All files should end with a new line A README.md file, at the root of the folder of the project is mandatory Code should follow the Betty style No global variables allowed No more than 5 functions per file Use of only malloc, free, and exit from the C standard library Use of _putchar is allowed Prototypes of all functions and _putchar should be included in the header file lists.h Header files should be include guarded Data Structure This project uses the following structure for implementing singly linked lists in C:

arduino Copy code /**

struct list_s - singly linked list
@str: string - (malloc'ed string)
@len: length of the string
@next: points to the next node
Description: singly linked list node structure */ typedef struct list_s { char *str; unsigned int len; struct list_s *next; } list_t;
Functions The project includes several functions for working with singly linked lists, which will be covered in more detail in individual task descriptions. However, some general requirements for functions in this project include:

No more than 15 lines of code per function Functions should return void, unless otherwise specified Functions should be named descriptively, following lower camel case style (functionName()) Functions should take in the relevant parameters for the task and the list_t structure Functions should modify the list_t structure in some way, or perform an action related to the list Tasks This project includes multiple tasks, each with specific requirements for working with singly linked lists. See individual task descriptions for more information.

Author This project was completed by [Solomon Offei] for the Alx Software Engeneering program .
