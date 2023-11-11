#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Print anything based on the provided format
 * @format: List of types of arguments passed to the function
 * @...: Variable number of arguments to print
 */
void print_all(const char * const format, ...) {
	va_list args;
	va_start(args, format);
	
	int i;
	float f;
	char *s;
	char c;

	while ((c = *format)) {
		if (c == 'c') {
			i = va_arg(args, int);
			printf("%c", (char)i);
		} else if (c == 'i') {
			i = va_arg(args, int);
			printf("%d", i);
		} else if (c == 'f') {
			f = va_arg(args, double);
			printf("%f", f);
		} else if (c == 's') {
			s = va_arg(args, char*);
			if (s == NULL) {
				printf("(nil)");
			} else {
				printf("%s", s);
			}
		}

		format++;
	}

	va_end(args);
	printf("\n");
}
