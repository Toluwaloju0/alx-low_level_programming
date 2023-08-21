#include "main.h"
/**
* swap_int - to swap two integers
* @*a - a pointer to integer a
* @*b - a pointer to integer b
* int a - an integer
* int b - an integer
*/
void swap_int(int *a, int *b)
{
	int *one = a;
	int *two = b;

	*one = 'b';
	*two  = 'a';
}
