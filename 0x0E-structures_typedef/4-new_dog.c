#include "dog.h"
#include <stdlib.h>
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
	i->name = name;
	(*i).age = age;
	(*i).owner = owner;
	return (i);
}
