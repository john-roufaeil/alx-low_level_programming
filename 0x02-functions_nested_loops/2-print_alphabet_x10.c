#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	c = 'a';
	i = 0;
	while (i++ < 10)
	{
		while (c <= 'z')
		{
			_putchar(c++);
		}
		_putchar('\n');
	}
}
