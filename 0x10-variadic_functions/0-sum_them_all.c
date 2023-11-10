#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum of all its parameters
 * @n: The number of parameters
 * @...: Variable number of parameters to sum
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(valist, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
	return (sum);
}
