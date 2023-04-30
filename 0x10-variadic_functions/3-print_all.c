#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything or everything
 * @format: lists types of arguments passed to the function
 * c: character
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int k = 0, s;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format && format[k])
	{
		s = k + 1;

		switch (format[k])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				s = 0;
				break;
		}

		separator = ", ";
		k = s;
	}

	printf("\n");
	va_end(args);
}
