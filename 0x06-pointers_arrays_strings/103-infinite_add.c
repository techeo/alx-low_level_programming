#include "main.h"

/**
 * infinite_add - Adds two numbers as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum;
	int i, j, k;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	if (size_r <= len1 || size_r <= len2 || size_r == 0)
		return (0);

	carry = 0;
	for (i = len1 - 1, j = len2 - 1, k = size_r - 1; k >= 0; i--, j--, k--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (i >= 0 || j >= 0)
		{
			if (sum > 9)
			{
				carry = 1;
				sum -= 10;
			}
			else
				carry = 0;
			r[k] = sum + '0';
		}
		else if (k == 0)
		{
			if (sum > 9)
				return (0);
			r[k] = sum + '0';
		}
	}
	r[size_r] = '\0';

	if (r[0] == '0')
		return (r + 1);
	return (r);
}
