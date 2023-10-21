#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int divisor = 1;
	int is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			n = -2147483647;
			is_negative = 1;
		}
		else
			n = -n;
	}

	while ((n / divisor) >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		int digit = n / divisor;
		_putchar('0' + digit);
		n -= digit * divisor;
		divisor /= 10;
	}
	if (is_negative)
	{
		_putchar('8');
	}
}

