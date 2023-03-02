#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0') /* find the end of dest */
	{
		p++;
	}

	while (*src != '\0') /* copy src to dest */
	{
		*p++ = *src++;
	}

	*p = '\0'; /* add null terminator */

	return dest;
}
