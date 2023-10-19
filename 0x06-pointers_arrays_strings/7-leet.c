#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_replace[5] = {'a', 'e', 'o', 't', 'l'};
	char leet_codes[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_replace[j] || str[i] == (leet_replace[j] - 32))
				str[i] = leet_codes[j];
		}
	}

	return (str);
}
