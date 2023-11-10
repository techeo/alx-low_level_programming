#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: Variable number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vls;
	unsigned int i;
	char *r;

	va_start(vls, n);
	i = 0;
	while (i < n)
	{
		r = va_arg(vls, char*);
		if (!r)
			printf("(nil)");
		else
			printf("%s", r);
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(vls);
}
