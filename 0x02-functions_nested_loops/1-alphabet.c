#include <stdio.h>
#include <unistd.h>
/* betty style doc for function main goes there */
/**
 * main - check the code
 * @main - for alpha
 * Return: Always 0 (Success)
 * print_alphabet - for  beta
 * @print_alphabet - for the code
 */


int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
