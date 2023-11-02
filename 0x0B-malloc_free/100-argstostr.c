#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;
	char newline = '\n';

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* Include space for the newline character */
	}

	/* Allocate memory for the new string */
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = newline;
	}

	str[len] = '\0';

	return (str);
}
