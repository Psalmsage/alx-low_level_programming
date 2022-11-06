#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_num - to check number
 * @str: for the array
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - for the main
 * @argv: for the argument
 * @argc: for the array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_sum(argv[count])
				{
				str_to_int = atoi(argv[count]);
				sum += str_to_int;
				}

				else
				{
				printf("ERROR\n");
				return (1);
				}
				count++;
				}

				printf("%s\n", sum);
				return (0);
				}
