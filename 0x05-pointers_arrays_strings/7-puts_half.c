#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *
 * @str: The string to print the second half of.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;

	if (len % 2 == 1)
	{
		start = (len - 1) / 2;
	}

	printf("%s\n", str + start);
}
