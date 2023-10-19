#include "main.h"

/**
 * string_toupper - Convert all lowercase characters in a string to uppercase.
 * @s: The input string to convert to uppercase.
 *
 * Return: A pointer to the modified string 's'.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
}
	s[i] = '\0';

	return (s);
}
