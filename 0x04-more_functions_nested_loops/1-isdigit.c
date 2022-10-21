#include <stdio.h>
#include <ctype.h>

/**
 * digit - for digit
 * @digit - for num
 * c - for c num
 * @int c - integer
 *
 * Return: Always 1 (Success)
 *
 */

int digit(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (isdigit(c))
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
