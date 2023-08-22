#include "main.h"
#include <stdio.h>
/**
* print_array - to print the members of an array
* @a: a pointer to integer
* @n: an integer
*/
void print_array(int *a, int n)
{
	int array[n];

	while (n >= 0)
	{
		printf("%d, ", array[n]);
		n++;
	}
	printf("\n");
}
