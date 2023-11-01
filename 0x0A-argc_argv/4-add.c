#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive_number - Checks if a string represents a positive number.
 * @str: The input string to check.
 *
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point. Adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	if (!is_positive_number(argv[i]))
{
	printf("Error\n");
	return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
