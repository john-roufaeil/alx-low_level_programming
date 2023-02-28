#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of all even fibonacci numbers less than 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	long a, b, c, sum;

	a = 0;
	b = 1;
	c = 1;
	while (c < 4000000)
	{
		a = b;
		b = c;
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
