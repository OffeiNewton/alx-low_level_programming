#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	/* Find the end of dest */
	while (*p != '\0')
	{
		p++;
	}

	/* Copy src to dest, up to n bytes */
	while (*src != '\0' && n-- > 0)
	{
		*p++ = *src++;
	}

	*p = '\0'; /* Add null terminator */

	return (dest);
}
