#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: pointer to a string
 *
 * Return: void
 */
void _puts(char *str)
{
	int _putchar(char c);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
