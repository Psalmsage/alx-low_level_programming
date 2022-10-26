#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * puts2 - alternate
 * @str: strings
 */

void puts2(char *str)
{
	int len = strlen(str);

	for (int index = 0; index < len; index += 2)
	{
		printf("%c", str[index]);
	}
	putchar ('\n');
}
