#include "main.h"
/**
* print_triangle - to print a triangle
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int a = size - 1;

		while (a >= 0)
		{
			_putchar('_');
			a--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
