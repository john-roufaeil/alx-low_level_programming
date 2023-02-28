#include "main.h"

/**
 * print_times_table - prints the time table of n
 * @n: input integer
 */
void print_times_table(int n)
{
	int op0, op1, res;

	if (n >= 0 && n <= 15)
	{
		for (op0 = 0; op0 < n; op0++)
		{
			_putchar('0');
			for (op1 = 1; op1 < n; op1++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				res = op0 * op1;
				if (res <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (res <= 99)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
				}
				else
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
