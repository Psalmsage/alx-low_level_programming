#include <stdlib.h>
#include "dog.h"

/** 
 * init_dog - for the dogs
 * @d: for d
 * @name: for name
 * @page: for page
 * @owner: for the owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d ->name = name;
		d ->age = age;
		d ->owner = owner;
	}
