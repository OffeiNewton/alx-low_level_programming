#include "variadic_functions.h"

/**
 * sum_them_all - returns the total of all parameters
 * @n: number of parameters
 *
 * Return: total of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int k, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (k = 0; k < n; k++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
