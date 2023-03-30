#include "lists.h"
#include <stdio.h>

/**
 * _putchar - writes the character to stdout
 * @c: the character to be written
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
