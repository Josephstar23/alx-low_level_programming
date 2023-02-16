#include <stdio.h>
/**
 * main - A C program that prints various types of computer
 * Return: 0 (Success)
 */
int main(void)
{
char c;
int d;
long int m;
long long int n;
float k;
printf(“Size of a char:%lu byte(s)\n”, (unsigned long)sizeof(c));
printf(“Size of a int:%lu byte(s)\n”, (unsigned long)sizeof(d));
printf(“Size of a long int:%lu byte(s)\n”, (unsigned long)sizeof(m));
printf(“Size of a long long int:%lu byte(s)\n”, (unsigned long)sizeof(n));
printf(“Size of a float:%lu byte(s)\n”, (unsigned long)sizeof(k));
return (0);
}
