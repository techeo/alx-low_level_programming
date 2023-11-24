#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Unsigned long int number
 * @index: Index of the bit to retrieve
 *
 * Return: Value of the bit at index 'index' or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
       	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	
	return ((n >> index) & 1);
}

