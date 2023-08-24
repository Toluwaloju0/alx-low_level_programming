#include "main.h"
/**
* print_line - to print a line n times
* @n: the number of times n is to be printed
*/
void print_line(int n)
{
	if (n > 0)
	{
		int a = 1;

		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	}
	_putchar('\n');
}
