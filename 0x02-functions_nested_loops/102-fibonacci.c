#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long i, a, b, c;

	a = 0;
	b = 1;
	printf("0, 1");
	for (i = 2; i < 50; i++)
	{
		printf(", ");
		c = a + b;
		printf("%ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
