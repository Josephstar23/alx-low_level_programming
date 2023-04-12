#include "main.h"

/**
 * flip_bits - counts the number of bits needed
 * to flip from one number to another
 * @n: first number to flip
 * @m: second number to flip
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> 1;
		if (current & 1)
			count++;
	}
	return (count);
}
