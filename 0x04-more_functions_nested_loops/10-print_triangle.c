#include "main.h"
/**
* print_triangle - to print a triangle
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = size - 1; b > 0; b--)
		{
			_putchar('_');
		}
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	return;
}
