#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the program
 *
 * Description: Generates a random valid password for the 101-crackme program
 * using lowercase letters, uppercase letters, and digits.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char password[7]; /* Array to store password */
	int i; /* Counter variable for loop */

	srand(time(NULL)); /* Seed the random number generator */

	for (i = 0; i < 6; i++) /* Loop through first 6 characters of password */
	{
		int rand_num = rand() % 62; /* Generate random number between 0 and 61 */

		if (rand_num < 26) /* If random number is less than 26, use lowercase letter */
			password[i] = 'a' + rand_num;
		else if (rand_num < 52) /* If random number is between 26 and 51, use uppercase letter */
			password[i] = 'A' + rand_num - 26;
		else /* If random number is between 52 and 61, use digit */
			password[i] = '0' + rand_num - 52;
	}

	password[6] = '\0'; /* Add null terminator to end of password */
	printf("%s\n", password); /* Print password to console */
	return (0); /* Return success */
}
