#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('\n');
	return (0);
}
