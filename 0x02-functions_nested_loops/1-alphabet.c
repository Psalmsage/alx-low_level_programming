#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - check the code
 * @main - for alpha
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
