#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - for dogs
 * @d: for all struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d -> name == NULL)
		printf("Name: (nil)\n");
	else 
		printf("Name: %s\n", d ->name);

	if (d ->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %s\n", for d->age);

	if (d ->owner == NUll)
		print("Owner: (NIL)\n");
	else
		print("Owner: %s\n" d ->owner);
}
