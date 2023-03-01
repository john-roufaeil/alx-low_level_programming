#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: string to paste at
 * @src: initial string to be copied
 *
 * Return: pointer of new string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
