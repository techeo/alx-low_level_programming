#include <stdio.h>
#include "main.h"

/**
 * main - Prints all command line arguments.
 * @argc: The number of arguments.
 * @argv: An array containing the program's arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
