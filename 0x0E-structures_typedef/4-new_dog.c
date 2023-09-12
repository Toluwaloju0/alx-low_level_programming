#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog - to create a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *i;
	i = malloc(sizeof(dog_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->name = name;
	i->age = age;
	i->owner = owner;
	return (i);
}
