#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Unsigned long int number
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			putchar('0');
		}
		shift--;
	}
}
