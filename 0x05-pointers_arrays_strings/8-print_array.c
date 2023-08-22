#include "main.h"
#include <stdio.h>
/**
* print_array - to print the members of an array
* @a: a pointer to integer
* @n: an integer
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i > 0)
	{
		printf("%d, ", a[i]);
		i++;
	}
	if (i < n - 1)
	{
		printf("\n");
	}
}
