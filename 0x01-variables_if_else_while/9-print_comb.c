#include <stdio.h>

/**
 * main - prints all combinations of single digits
 * Return: Always 0
 */

int main(void)

{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
