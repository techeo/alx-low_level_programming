#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;

	}
	dest[index_01 + index_02] = '\0';

	return (dest);
}
