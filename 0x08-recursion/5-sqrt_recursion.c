#include "main.h"

/**
 * sqrt_helper - find the square root of a number
 * @n: the number to find the square root of
 * @i: the current guess
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
