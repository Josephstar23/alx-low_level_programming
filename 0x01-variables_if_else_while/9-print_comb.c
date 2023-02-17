#include <stdio.h>

/**
 * main - prints all combinations of single digits
 * Return: Always 0
 */

int main(void)

{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 49)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
