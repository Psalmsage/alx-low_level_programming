#include "main.h"

/**
 * more_numbers - numer 0-12 in ten folds
 */

void more_numbers(void)
{
	int c, count;

	for (count = 0; count <= 9; count++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c % 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
