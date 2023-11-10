#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: Variable number of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vls;
	unsigned int i = 0;

	va_start(vls, n);

	while (i < n)
	{

		printf("%d", va_arg(vls, int));
		i++;
		if (i < n && (separator))
			printf("%s", separator);
	}
	putchar(10);
	va_end(vls);
}
