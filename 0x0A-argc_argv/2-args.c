#include "main.h"
#include <stdio.h>

/**
 * main- main start
 * @argc: for arguments
 * @argv: for all
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
