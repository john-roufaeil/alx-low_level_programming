#include "main.h"
#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i, a, b, c;

	a = 1;
	b = 1;
	printf("1");
	for (i = 1; i <= 98; i++)
	{
		printf(", ");
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
