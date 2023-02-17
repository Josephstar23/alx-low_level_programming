#include <stdio.h>

/**
 * main - prints numbers in base 16
 * Return: Always 0
 */

int main(void)

{
	int num;
	char lm;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lm = 'a'; lm <= 'z'; lm++)
		putchar(lm);

	putchar('\n');

	return (0);
}
