#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: array of integers.
 * @size: number of elements in the array.
 * @cmp: pointer to the function used to compare values.
 *
 * Return: Index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	index = size;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	while (size--)
	{
		if (cmp(array[index - size]))
			return (index - size);
	}

	return (-1);
}
