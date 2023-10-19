#include "main.h"

/**
 * cap_string - Capitalize all words in a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int sep = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (sep && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
			sep = 0;
		}
	else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' ||
                 s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
                 s[i] == ')' || s[i] == '{' || s[i] == '}')
			{
				sep = 1;
			}
		}
		i++;
	}

	return (s);
}
