#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - for all calloc and the rets
 * @nmemb: the rray
 * @size:for all zize
 * Return: for void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
