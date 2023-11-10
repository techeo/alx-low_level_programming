#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: array of integers.
 * @size: size of the array.
 * @action: pointer to the function to be executed.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);
}
