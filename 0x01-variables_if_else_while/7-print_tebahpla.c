#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main- main start
 * @main - for alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
