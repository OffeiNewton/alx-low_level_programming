#include <stdio.h>

/**
 * main - Prints all command line arguments, one argument per line.
 * @argc: The number of command line arguments.
 * @argv: An array of command line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
