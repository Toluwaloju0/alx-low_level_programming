#include "dog.h"
#include <stdlib.h>
/**
* free_dog - to free the space allocated in memory
* @d: pointer to the space
*/

void free_dog(dog_t *d)
{
	free(d);
}
