#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the times table for a given n starting from 0
 * @n: the integer to print the times table for
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
		return;
	for (i = 0 ; i <= 10 ; i++)
	{
		printf("%d x %d = %d\n", i, n, i * n);
	}
}
