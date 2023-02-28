#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed to by dest.
 *
 * @dest: The buffer to copy the string to.
 * @src: The string to copy.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (dest_start);
}
