#include <stdio.h>
#include <stdlib.h>

/**
 * count_coins - count the number of coins needed to make change
 * @amount: the amount of money to make change for
 *
 * Return: the number of coins needed
 */
int count_coins(int amount)
{
	int coins = 0;

	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25;
		else if (amount >= 10)
			amount -= 10;
		else if (amount >= 5)
			amount -= 5;
		else if (amount >= 2)
			amount -= 2;
		else
			amount -= 1;
		coins++;
	}
	return (coins);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char **argv)
{
	int amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = count_coins(amount);
	printf("%d\n", coins);
	return (0);
}
