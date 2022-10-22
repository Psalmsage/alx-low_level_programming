#include <stdio.h>
#include <ctype.h>

/**
 * isUpper - for uppercase
 * @isUpper - for all
 * @int c -letter
 * Return: Always 0 (Success)
 */

int isUpper(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		if (isupper(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
