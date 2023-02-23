#include <stdio.h>

/**
 * main - prints the sum of even-valued terms in the Fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	int num1;
	int num2;
	int sum;
	int next;

	num1 = 1;
	num2 = 2;
	next;
	sum = 2;
	while (num2 <= 4000000)
	{
		next = num1 + num2;
		if (next % 2 == 0)
		{
			sum += next;
		}
		num1 = num2;
		num2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
