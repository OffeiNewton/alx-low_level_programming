#include "main.h"

/**
 * print_binary - This prints the binary representation of a number
 * @n: unsigned long int number to be converted
 *
 * Return: no return value (void)
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
