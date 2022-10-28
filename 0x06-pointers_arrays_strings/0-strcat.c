#include <stdio.h>

/**
 * _strcat - for the test
 * @dest: for the destination
 * @src: for the source
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (0);

}
