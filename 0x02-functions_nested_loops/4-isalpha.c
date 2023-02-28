#include "main.h"

/**
 * _isalpha - specifies whether a char is a letter or not
 * @c: input char
 *
 * Return: 1 if in alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
