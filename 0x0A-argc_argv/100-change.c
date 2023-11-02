#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int min_coins = 0;
	int i = 0;

	while (cents > 0)
	{
		min_coins += cents / coins[i];
		cents %= coins[i];
		i++;
	}

	printf("%d\n", min_coins);

	return (0);
}
