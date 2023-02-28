#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of an integer
 * @n: input integer
 *
 * Return: 1 if in positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	printf("-");
	return (-1);
}
