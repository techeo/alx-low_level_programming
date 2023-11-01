#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: The number of arguments.
 * @argv: An array containing the program's arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
