#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
* print_diagsums - to print the sum of the diagonals of a square matrix of integers
* @a: the two-dimensional array
* @size: the numbers of digits to be added
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int k = 0;
	int l = size -1;
	int c = 0;
	int d = 0;

	while (i < size && j >= 0)
	{
		d = *a + d;
		i++;
		j--;
	}
	while (l >= 0 && k < size)
	{
		c = *a + c;
		l--;
		k++;
	}
	printf ("%d, %d\n", d, c);
}
