#include "main.h"
/**
* print_diagonal - to prints lines in a diagonal pattern
* @n: the numbr of times n is to be printed
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a = 1;

		while (a < n)
		{
			_putchar(' ');
			a++;
		}
		if (a == n)
		{
			_putchar(\);
			_putchar('\n');
		}
	}
