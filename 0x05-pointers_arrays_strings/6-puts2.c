#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * puts2 - alternate
 * @str: strings
 */

void puts2(char *str)
{
	int index = 0;

	while (index < 10)
	{
		printf("%c", str[index]);
		index += 2;
	}
	putchar ('\n');
}
