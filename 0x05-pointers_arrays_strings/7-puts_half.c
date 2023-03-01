#include "main.h"

/**
 * puts_half - prints the other half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int i = 0;

	while (!(str[i] == '\0'))
	{
		i++;
	}
	for (i /= 2; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
