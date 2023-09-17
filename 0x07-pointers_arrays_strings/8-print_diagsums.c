#include "main.h"
#include <stdio.h>
/**
* print_diagsums - to print the sum of the diagonals of a square matrix of integers
* @a: the two-dimensional array
* @size: the numbers of digits to be added
*/
void print_diagsums(int *a, int size)
{
	int add1 = 0, add2 = 0, i = 0, j = 0, k = size - 1, l = size - 1;

	while (k >= 0)
	{
		while (j < size)
		{
			add1 = add1 + *(a + (k * j));
			j++;
		}
		k--;
	}
	while (i < size)
	{
		while (l >= 0)
		{
			add2 = add2 + *(a + (i * l));
			l--;
		}
		i++;
	}
	printf ("%d, %d\n", add1, add2);
	return;
}
