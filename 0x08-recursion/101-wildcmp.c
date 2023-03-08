#include "main.h"

/**
 * wildcmp - compare two strings and returns 1 if the strings can be considered
 * identical, otherwise return 0. s2 can contain the special character *.
 * The special char * can replace any string (including an empty string)
 *
 * @s1: first string
 * @s2: second string (may contain wildcard *)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
