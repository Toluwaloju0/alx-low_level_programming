#include "main.h"
/**
* print_triangle - to print a triangle
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	int a, b, c;
	int d = size - 1;
	int e = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 0; b < d; b++)
		{
			_putchar(' ');
		}
		d = d - 1;
		for (c = 0; c < e; c++)
		{
			_putchar('#');
		}
		if (e == size + 1)
		{
			break;
		}
		e = e + 1;
		_putchar('\n');
	}
}
