#include <stdlib.h>
#include <string.h>

int count_words(char *str);
int word_len(char *str);
char **free_words(char **words, int i);

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 *         NULL if str == NULL or str == "" or on failure
 */
char **strtow(char *str)
{
	char **words = NULL;
	int n_words, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);

	n_words = count_words(str);
	if (n_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (n_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < n_words; i++)
	{
		while (str[j] == ' ')
			j++;

		words[i] = malloc(sizeof(char) * (word_len(str + j) + 1));
		if (words[i] == NULL)
			return (free_words(words, i));

		for (k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
			words[i][k] = str[j];

		words[i][k] = '\0';
	}

	words[n_words] = NULL;
	return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * word_len - counts the length of a word
 * @str: the string containing the word
 *
 * Return: the length of the word
 */
int word_len(char *str)
{
	int len = 0, i;

	for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
		len++;

	return (len);
}

/**
 * free_words - frees a double pointer to strings
 * @words: the double pointer to free
 * @i: the current index of the array to free until
 *
 * Return: NULL
 */
char **free_words(char **words, int i)
{
	for (; i >= 0; i--)
		free(words[i]);

	free(words);
	return (NULL);
}
