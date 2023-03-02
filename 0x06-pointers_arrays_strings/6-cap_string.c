#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: The string to capitalize
 *
 * Return: A pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1; /* Capitalize next character */

	while (str[i] != '\0')
	{
		if (cap_next && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 'a' + 'A';

		cap_next = 0;

		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap_next = 1;
				break;
		}

		i++;
	}

	return (str);
}
