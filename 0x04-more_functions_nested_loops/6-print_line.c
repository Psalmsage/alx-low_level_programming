#include "main.h"

/**
 * print_line - straight line drawing with characters
 * @n: number of chrat
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('-');
		} _putchar ('\n');
	}
}
