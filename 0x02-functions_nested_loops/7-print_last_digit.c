#include "main.h"

/**
 * _abs - computes last digit value of an integer
 * @n: input integer
 *
 * Return: value of last digit of n
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
