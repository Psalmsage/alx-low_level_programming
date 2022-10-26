#include <stdio.h>
#include<string.h>

/**
 * _strlen - length
 * @s : for chaar
 * Return: length (success)
 *
 *
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
