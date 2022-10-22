#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - for digit
 * @_isdigit - for num
 * @c : the number
 * c - for c num
 * @int c - integer
 *
 * Return: Always 1 (Success)
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
