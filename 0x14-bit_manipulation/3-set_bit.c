#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at givn index.
 * index: start from 0 of the bit you want to set
 * n: it's a pointer number of i
 * Return: returning 1 if it worked, or -1 if there is an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
