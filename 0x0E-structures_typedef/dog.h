#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure
 * @name: firts element
 * @age: second element
 * @owner: third element
 *
 * Description: a simple struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog1- typedef for struct dog
 */
typedef struct dog dog1;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
