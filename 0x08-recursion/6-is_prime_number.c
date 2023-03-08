/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @div: the current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int check_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
 		return (0);
	return (check_prime(n, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
