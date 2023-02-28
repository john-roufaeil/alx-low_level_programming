#include "main.h"

/**
 * times_table - prints the time table from 0 through 9
 */
void times_table(void)
{
	int op0, op1;

	for (op0 = 0; op0 < 9; op0++)
	{
		for (op1 = 0; op1 < 9; op1++)
		{
			_putchar(op0 * op1 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
