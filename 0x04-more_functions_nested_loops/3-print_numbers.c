#include<stdio.h>

/**
 * print_numbers - to print num
 * @print_numbers - for num
 * @int c - for c+
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar((c % 10) + '0');
	putchar('\n');
}
