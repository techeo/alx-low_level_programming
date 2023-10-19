#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
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
