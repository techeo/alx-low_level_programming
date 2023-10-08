#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number, checks if it's positive,
 * negative, or zero, and then prints a message accordingly.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Seed the random number generator with the current time */
	srand(time(0));

	/* Generate a random number and shift it to be within -RAND_MAX/2 to +RAND_MAX/2 range */
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}

