#include "dog.h"
#include <stddef.h>
/**
* init_dog - to initialize the value of struct dog
* @d: a pointer of struct dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
