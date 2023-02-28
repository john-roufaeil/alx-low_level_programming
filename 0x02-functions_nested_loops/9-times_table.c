#include "main.h"

/**
 * times_table - prints the time table from 0 through 9
 */
void times_table(void)
{
	int op0, op1, res;

	for (op0 = 0; op0 < 10; op0++)
	{
		_putchar('0');
		for (op1 = 1; op1 < 10; op1++)
		{
			_putchar(',');
			_putchar(' ');
			res = op0 * op1;
			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
