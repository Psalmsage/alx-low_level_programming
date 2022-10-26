#include <stdio.h>
#include <string.h>

/**
 * rev_string - string in rev
 * @s: for char
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int middle = len / 2;
	char temp;

	for (int i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
