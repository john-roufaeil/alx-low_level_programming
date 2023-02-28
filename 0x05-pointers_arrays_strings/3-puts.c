#include "main.h"

/**
 * _puts - prints a string then a new line
 * @str: pointer to a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*(str++));
	}
	_putchar('\n');
}
