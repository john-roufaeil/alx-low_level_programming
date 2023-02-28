#include "main.h"
#include <stdio.h>

/**
 * multiples - prints the sum of all multiples of 3 and 5 below 1024
 */
void multiples(void)
{
	int i, sum;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
