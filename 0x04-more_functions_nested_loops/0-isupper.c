#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: the character being checked
 * Return: 1 if an uppercase character, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
