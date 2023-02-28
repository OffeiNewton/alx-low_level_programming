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
	char password[15]; /* Array to store password */
	int i; /* Counter variable for loop */

	srand(time(NULL)); /* Seed the random number generator */

	/* Generate first 5 random characters of password using lowercase letters, uppercase letters, digits, and '!' */
	for (i = 0; i < 5; i++) 
	{
		int rand_num = rand() % 70; /* Generate random number between 0 and 69 */

		if (rand_num < 26) /* If random number is less than 26, use lowercase letter */
		password[i] = 'a' + rand_num;
		else if (rand_num < 52) /* If random number is between 26 and 51, use uppercase letter */
			password[i] = 'A' + rand_num - 26;
		else if (rand_num < 62) /* If random number is between 52 and 61, use digit */
			password[i] = '0' + rand_num - 52;
		else /* If random number is between 62 and 69, use '!' or ' ' */
		{
			if (rand_num < 66)
				password[i] = '!';
			else
				password[i] = ' ';
		}
	}

	/* Add the remaining characters to complete the password */
	password[5] = '!';
	password[6] = ' ';
	password[7] = 'C';
	password[8] = 'o';
	password[9] = 'n';
	password[10] = 'g';
	password[11] = 'r';
	password[12] = 'a';
	password[13] = 't';
	password[14] = 's';
	password[15] = '\0'; /* Add null terminator to end of password */
	printf("%s\n", password); /* Print password to console */
	return (0); /* Return success */
}
