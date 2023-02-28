#include "main.h"
#include <stdio.h>
#define LARGE 10000000000

/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i, a, b, c;
	unsigned long int hold1, hold2;

	a = 1;
	b = 2;
	printf("1, 2");
	for (i = 2; i < 98; i++)
	{
		printf(", ");
		if (a + b > LARGE)
		{
			hold1 = (a + b) / LARGE;
			hold2 = (a + b) % LARGE;
			c = 
		c = a + b;

		printf("%lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
