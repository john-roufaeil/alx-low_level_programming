#include "main.h"

/**
 * _atoi- converts a string to an int
 * @s: pointer to the string
 *
 * Return: 0 if no integer found, the integer otherwise
 */
int _atoi(char *s)
{
	int i = 0;
	int found = 0, minus = 0, result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			found = 1;
		}
		else if (found == 1)
			break;
		i++;
	}
	if (found == 0)
		return (0);
	if (minus % 2 == 1)
		return (result);
	return (result * (-1);
}
