#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary to an unsigned int
 * @b: the string to be converted
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		j = 2 * j + (b[i] - '0');
	}
		return (j);
}

