#include "main.h"

/**
 * print_line - Draw a straight line of underscores
 * @n: number of times printed
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;
}
	_putchar('\n');
}
