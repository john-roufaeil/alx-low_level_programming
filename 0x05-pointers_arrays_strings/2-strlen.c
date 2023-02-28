#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input pointer to a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s++) != '\0')
	{
		length++;
	}
	return (length);
}
