#include <stdio.h>

/**
 * main - prints lowercase and uppercase of the alphabet
 * Return: Always 0
 */

int main(void)
{
	char dp;

	for (dp = 'a'; dp <= 'z'; dp++)
		putchar(dp);
	for (dp = 'A'; dp <= 'Z'; dp++)
		putchar(dp);
	putchar('\n');

	return (0);
}
