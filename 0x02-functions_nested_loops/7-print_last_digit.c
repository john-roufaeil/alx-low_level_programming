#include "main.h"

/**
 * print_last_digit - computes last digit value of an integer
 * @n: input integer
 *
 * Return: value of last digit of n
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
