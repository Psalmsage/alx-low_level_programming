#include<stdio.h>

/**
 * mul - for the multiple
 * @mul - for multi
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (Success)
 */

int mul(int a, int b)
{
	if (b == 0)
		return (0);
	if (b > 0)
		return (a + mul(a, b - 1));
	if (b < 0)
		return (-mul(a, -b));
	return (0);
}
