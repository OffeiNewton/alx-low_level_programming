#include "main.h"

/**
 * print_alphabet -  prints the lowercase alphabet 10 times
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
