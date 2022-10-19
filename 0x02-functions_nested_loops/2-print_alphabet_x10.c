#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - main code
 * @print_alphabet_x10 - for the ten times
 * Return: Always 0 (Success)
 */


int print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 1;
	for (i = 1; i <= 10; i++)
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);

	putchar('\n');
	return (0);
}
