#include <stdio.h>
#include <stdlib.h>
#include <sring.h>
#include "dog.h"

/**
 * new_dog - create a new dog and stores a copy of name and owner
 * @name:pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: pointer to the newly created dog, or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	/*Allocate memory for the new dog struct*/
	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);

	/*Allocate memory for copying the name and owner*/
	dog_ptr->name = strdup(name);
	dog_ptr->owner = strdup(owner);

	/*Check if strdup failed*/
	if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		free(dog_ptr);
		return (NULL);
	}

	dog_ptr->age = age;
	return (dog_ptr);
}
