#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet - for alphabet
 * main - check the code
 * @main - for alpha
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
