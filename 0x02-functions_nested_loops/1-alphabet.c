#include "main.h"

/**
 * main - print alphabet
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');	
}
