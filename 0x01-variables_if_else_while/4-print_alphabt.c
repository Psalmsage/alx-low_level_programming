#include <stdio.h>
#include <stdlib.h>

/*betty style doc for function main goes there*/
/**
 * main- main start
 * @main - for description
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		remove('e', 'q');
	putchar(ch);
	putchar('\n');

	return (0);
}
