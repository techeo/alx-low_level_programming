#include "main.h"

/**
 * reverse_array - Reverse the content of an array.
 * @a: Pointer to the array to be reversed.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0;  i < n ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
