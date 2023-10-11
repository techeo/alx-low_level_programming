#include "main.h"
/**
 * _islower - check if a character is lower case.
 * @c: The character to test.
 *
 * Return: 1 (True) else 0 (False)
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
