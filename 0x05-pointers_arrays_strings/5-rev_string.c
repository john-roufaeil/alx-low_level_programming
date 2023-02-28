#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char temp;

	while (!(s[a] == '\0'))
	{
		a++;
	}
	a--;
	while (b < a)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
		b++;
		a--;
	}
}
