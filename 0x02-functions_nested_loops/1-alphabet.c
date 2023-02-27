#include "main.h"

/**
 * main - print alphabet
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
}
