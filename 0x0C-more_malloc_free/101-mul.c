#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * Return: pointer to product, or NULL on failure
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry, len_res;
	char *res;

	if (len1 == 0 || len2 == 0)
		return (NULL);

	len_res = len1 + len2;
	res = calloc(len_res, sizeof(char));
	if (res == NULL)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (num1[i] - '0') * (num2[j] - '0') + res[i + j + 1];
			res[i + j + 1] = carry % 10;
			carry /= 10;
		}
		res[i + j + 1] = carry;
	}

	i = 0;
	while (i < len_res - 1 && res[i] == 0)
		i++;

	len_res -= i;
	for (j = 0; j < len_res; j++)
		res[j] += '0';

	res[len_res] = '\0';

	return (res);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	while (*num1)
	{
		if (!_isdigit(*num1))
		{
			printf("Error\n");
			return (98);
		}
		num1++;
	}

	while (*num2)
	{
		if (!_isdigit(*num2))
		{
			printf("Error\n");
			return (98);
		}
		num2++;
	}
	product = mul(argv[1], argv[2]);

	if (product == NULL)
	{
		printf("Error\n");
		return (98);
	}
	printf("%s\n", product);
	free(product);
	return (0);
}

