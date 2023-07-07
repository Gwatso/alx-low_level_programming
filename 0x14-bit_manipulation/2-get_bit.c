#include "main.h"

/**
 * get_bit - returning the value of a bit at given index.
 * n: check bits
 * index: which index to check the bit
 *
 * Return: returning the value of the bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
