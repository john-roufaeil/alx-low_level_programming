#include "main.h"

/**
 * _strncpy - copies a string to another until the nth character of src
 * @dest: string to paste in
 * @src: string to copy from
 * @n: at most n bytes to be copied from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
