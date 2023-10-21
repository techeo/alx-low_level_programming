#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if the result can't fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum, i, j;

	len1 = _strlen(n1) - 1;
	len2 = _strlen(n2) - 1;
	carry = 0;

	if (size_r <= len1 || size_r <= len2 || size_r == 0)
		return (0);

	r[size_r] = '\0';
	i = len1;
	j = len2;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += (n1[i] - '0');
		if (j >= 0)
			sum += (n2[j] - '0');

		carry = sum / 10;
		r[--size_r] = (sum % 10) + '0';

		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}
	if (r[size_r] == '0')
		size_r++;
	return (r + size_r);
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
