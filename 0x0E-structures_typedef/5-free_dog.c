#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- a function that frees dog
 * @d: first element
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
