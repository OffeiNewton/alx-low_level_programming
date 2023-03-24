#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: the name to print
 * @f: a pointer to the function to use for printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
