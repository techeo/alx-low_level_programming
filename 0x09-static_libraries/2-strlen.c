#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
