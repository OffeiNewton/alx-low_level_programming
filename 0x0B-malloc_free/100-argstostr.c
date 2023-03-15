#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the argument count
 * @av: an array of pointers to the arguments
 *
 * Return: a pointer to the concatenated string
 *         NULL if ac == 0, av == NULL or malloc fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	str = malloc((len + ac + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
