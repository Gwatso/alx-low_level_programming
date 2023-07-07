#include "main.h"

/**
 * clear_bit - setting the value of a bit to 0 at a givn index.
 * n: number  of i
 * index: start from 0 of the bit you to set
 * Return: returning 1 if it worked, or -1 if there is an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
