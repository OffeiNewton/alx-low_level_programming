#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int _putchar(char c);
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
