#include "main.h"
/**
* print_square - to print a square using #
* @size: the size of the square
*/
void print_square(int size)
{
	if (size > 0)
	{
		int a = 0;
		int b = 0;

		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
