#include "main.h"

/**
 * _strncat - concatenates two strings until the nth character of src
 * @dest: first part of the concatenated string
 * @src: second part of the concatenated string
 * @n: at most n bytes to be copied from src
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
