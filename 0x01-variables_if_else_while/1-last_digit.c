#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number,
 * prints the last digit, and provides information about it.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Calculate the last digit of n */
	int lastDigit = n % 10;

	printf("Last digit of %d is %d", n, lastDigit);

	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

