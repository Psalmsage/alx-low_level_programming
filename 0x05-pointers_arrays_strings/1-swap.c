#include <stdio.h>
#include <limits.h>

/**
 * swap_int - for swapping
 * @a : for a
 * @b : for b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	printf("a=%d, b=%d \n", *a, *b);


	printf("a = %d\n", INT_MAX);
	printf("b = %d\n", INT_MIN);
}
