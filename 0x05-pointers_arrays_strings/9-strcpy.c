#include "main.h"

/**
 * _strcpy - copies the string pointed by the src.
 * @dest:the destination buffer.
 * @src: the string to be copied.
 *
 * Return: a pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
}
	dest[index] = '\0';
	return (dest);
}
