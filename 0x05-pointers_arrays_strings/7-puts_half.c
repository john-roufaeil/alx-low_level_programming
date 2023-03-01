#include "main.h"

/**
 * puts_half - prints the other half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int i = 0, half = 0, max = 0;

	while (!(str[i] == '\0'))
	{
		i++;
	}
	half = i / 2;
	if (i % 2 == 1)
		half++;
	max = i;
	for (i = half; i < max; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
