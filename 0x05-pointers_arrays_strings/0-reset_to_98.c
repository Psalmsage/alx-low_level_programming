#include <stdio.h>

/**
 * reset_to_98 - to reset values
 *
 * @m : for all m
 *
 * Return: Always 0 (Success)
 */
void reset_to_98(int *m)
{
	int n;

	m = &n;
	*m = 98;
	printf("%d\n", n);
}
