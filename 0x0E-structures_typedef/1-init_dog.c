#include "main.h"

/**
 * init_dog - initializes a variable of type struct
 * @d: first element
 * @name: second element
 * @age: third element
 * @owner: forth element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
