#include <stdio.h>

/**
 * _puts_recursion - for recursion
 * @s: for char s
 */


void _puts_recursion(char *s)
{
	int i = 0;


	while (s[i] != '\n' && s[i] != '\0')
	{
		putchar (s[i]);
		i++;
	}
	putchar('\n');
}
