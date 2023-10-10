#include "dog.h"
#include <stdio.h>
/**
* print_dog - to print the content of struct dog
* @d: pointer to struct dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age <= 0)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
