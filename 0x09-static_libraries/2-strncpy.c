#include "main.h"

/**
 * _strncpy - Copy a string up to 'n' characters.
 * @dest: Destination buffer where the string is copied.
 * @src: Source string to be copied.
 * @n: Maximum number of characters to copy.
 *
 * Return: A pointer to the destination buffer 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i_01 = 0;

	for (i_01 = 0; i_01 < n && src[i_01] != '\0'; i_01++)
		dest[i_01] = src[i_01];
	for ( ; i_01 < n ; i_01++)
		dest[i_01] = '\0';

	return (dest);
}
