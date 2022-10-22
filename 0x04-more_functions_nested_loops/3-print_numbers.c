#include<stdio.h>

/**
 * print_numbers - to print num
 * @print_numbers - for num
 * @int c - for c+
 * Return: Always 0 (Success)
 */

int print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
