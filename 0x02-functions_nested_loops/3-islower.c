#include "main.h"

/**
 * _islower - specifies whether a char is lower or not
 * @c: input char
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
