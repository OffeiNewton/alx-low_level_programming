#include <stdarg.h>
#include <stdio.h>

/**
 * prints_strings - prints strings and then a new line
 * @separator: the string to be printed in-between the strings
 * @n: the number of strings to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int k;
	char *str;

	va_start(args, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && k != (n - 1))
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
