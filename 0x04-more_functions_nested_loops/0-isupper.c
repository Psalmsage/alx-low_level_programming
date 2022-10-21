#include <stdio.h>

/**
 * isUpper - for uppercase
 * @isUpper - for all
 * @int c -letter
 * Return: Always 0 (Success)
 */

int isUpper(void)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
