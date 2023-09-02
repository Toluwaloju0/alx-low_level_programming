#include "main.h"
/**
* swap_int - to swap two integers
* @a: an integer
* @b: an integer
*/
void swap_int(int *a, int *b)
{
	int *one = a;
	int *two = b;
	int temp = *one;

	*one = *two;
	*two = temp;
}
