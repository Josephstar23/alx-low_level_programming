#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: a pointer to an index
 * @index: the position of the bit
 * Return: 1 on  success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
