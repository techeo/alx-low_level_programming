#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to the string to be reversed.
 */
void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}
