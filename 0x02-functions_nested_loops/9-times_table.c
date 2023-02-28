#include "main.h"

/**
 * jack_bauer - prints all minutes of a day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int h0, h1, m0, m1;

	for (h0 = 0; h0 < 3; h0++)
	{
		for (h1 = 0; (h0 < 2 && h1 < 10) || (h0 == 2 && h1 < 4); h1++)
		{
			for (m0 = 0; m0 < 6; m0++)
			{
				for (m1 = 0; m1 < 10; m1++)
				{
					_putchar(h0);
					_putchar(h1);
					_putchar(':');
					_putchar(m0);
					_putchar(m1);
					_putchar('\n');
				}
			}
		}
	}
}
