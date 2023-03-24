#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Include any necessary header files here */
#include <stddef.h>

/* Function prototypes */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
