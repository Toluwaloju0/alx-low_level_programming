#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - to create a new struct dog
* @name: the name of the new dog
* @age: the age of the new dog
* @owner: the owner of the new dog
* Return: a pointer to the new dog in memory
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *i;

	i = malloc(sizeof(dog_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->name = strdup(name);
	if (i->name == NULL)
	{
		free(i);
		return (NULL);
	}
	(*i).age = age;
	(*i).owner = strdup(owner);
	if (i->owner == NULL)
	{
		free(i->name);
		free(i);
		return (NULL);
	}
	return (i);
}
