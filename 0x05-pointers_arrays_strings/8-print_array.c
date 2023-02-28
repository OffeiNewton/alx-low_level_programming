#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: The array of integers to print.
 * @n: The number of elements of the array to print.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", a[0]);

		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}

	printf("\n");
}
