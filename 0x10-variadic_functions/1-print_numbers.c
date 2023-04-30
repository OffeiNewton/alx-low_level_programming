#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers and then a new line
 * @separator: string to be printed in-between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int k;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(args, int));
		if (separator && k != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
