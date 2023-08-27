#include "main.h"
/**
* print_diagonal - to prints lines in a diagonal pattern
* @n: the numbr of times n is to be printed
*/
void print_diagonal(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('\n');
			a++;
