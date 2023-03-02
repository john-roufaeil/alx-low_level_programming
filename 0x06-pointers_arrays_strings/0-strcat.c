#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first part of the concatenated string
 * @src: second part of the concatenated string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest++ != '\0');
	dest--;
	while (*dest++ = *src++);
	return (dest);
}	
