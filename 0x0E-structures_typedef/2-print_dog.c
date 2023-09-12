#include <stdio.h>
#include "main.h"
/**
* print_dog - to print the details of a dog
* @d: pointer to the dog struct
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %d\n", (*d).age);
	printf("Owner: %s", (*d).owner);
}
