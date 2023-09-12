#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"
/**
* init_dog - to initialize variables for my_dog
* @d: pointer to struct dog
* @name: name of my_dog
* @age: age of my_dog
* @owner: owner of my dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
