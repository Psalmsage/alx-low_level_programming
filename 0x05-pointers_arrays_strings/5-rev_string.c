#include <stdio.h>
#include <string.h>

/**
 * rev_string - string in rev
 * @s: for char
 */

void rev_string(char *s)
{
	char *end = s + strlen(s) - 1;

	while (s < end)
	{
		char temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
