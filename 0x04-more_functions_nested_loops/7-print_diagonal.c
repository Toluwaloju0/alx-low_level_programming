#include "main.h"
/**
* print_diagonal - to prints lines in a diagonal pattern
* @n: the numbr of times n is to be printed
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a = 0;

		while (a < n)
		{
			int b = 0;

			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
