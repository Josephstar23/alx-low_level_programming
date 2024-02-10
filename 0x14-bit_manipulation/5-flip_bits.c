#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int first;
	unsigned long int second = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		first = second >> i;
		if (first & 1)
			j++;
	}
	return (j);
}
