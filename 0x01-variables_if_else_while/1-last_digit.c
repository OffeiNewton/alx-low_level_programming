#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number and prints the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is ", n);
    if (n < 0)
    {
        n = -n;
    }
    n %= 10;

    printf("%d ", n);

    if (n > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (n == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}

