#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *search;

	while (*haystack)
	{
		start = haystack;
		search = needle;

		while (*haystack && *search && *haystack == *search)
		{
			haystack++;
			search++;
		}

		if (!*search)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
