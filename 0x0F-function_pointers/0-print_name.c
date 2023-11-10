#include "function_pointers.h"

/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to be printed.
 * @f: The printing function that takes a char pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
