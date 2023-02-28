#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input pointer to first integer
 * @b: input pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
