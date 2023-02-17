#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Return: Always 0
 */

int main(void)

{
	char ln;

	for (ln = 'z'; ln >= 'a'; ln--)
		putchar(ln);
	putchar('\n');

	return (0);
}
