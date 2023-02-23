#include "main.h"

/**
 * print_numbers - checks for and prints the numbers (0 through 9)
 *
 * Return: Always 0
 */

int print_numbers(void)
{
	int i;

	for (i = 0; i < 9 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
