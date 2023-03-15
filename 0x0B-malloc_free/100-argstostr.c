#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 *
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length of arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* Add 1 for new line character */
	}

	/* Allocate memory for new string */
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	/* Copy arguments to new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* Add new line character */
		k++;
	}

	str[k] = '\0'; /* Add null terminator */

	return (str);
}
