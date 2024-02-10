#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: searches the value of bit
 * @index: the position of bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
