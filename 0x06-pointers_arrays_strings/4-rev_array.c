#include "main.h"
/**
* reverse_array - to reverse the content of an array
* @a: the array
* @n number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
