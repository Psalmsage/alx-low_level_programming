#include <stdio.h>

/**
 * _strcat - for the test
 * @dest: for the destination
 * @src: for the source
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
