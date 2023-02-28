#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -1;
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0') * sign;
		if (result != 0 && (s[i] < '0' || s[i] > '9'))
			break;
		i++;
	}

	return (result);
}
