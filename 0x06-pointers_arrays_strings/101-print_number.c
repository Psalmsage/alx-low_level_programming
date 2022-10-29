#include <stdio.h>

/**
 * print_number - for numbers
 * @n: for n
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	if (n != 0)
	{
		print_number(n / 10);
		putchar((n % 10) + '0');
	}
}
