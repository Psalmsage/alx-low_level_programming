#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - used to allocate memory with malloc
 * @b: byte number
 * Return: pointers to the allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
