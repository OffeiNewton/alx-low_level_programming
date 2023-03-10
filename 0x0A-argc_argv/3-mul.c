#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two command line arguments and prints the result.
 * @argc: The number of command line arguments.
 * @argv: An array of command line argument strings.
 *
 * Return: 0 if the program ran successfully, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3) {
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}
