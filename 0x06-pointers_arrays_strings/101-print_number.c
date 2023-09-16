#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_number - to print an integer
* @n: the integer to be printed
*/
void print_number(int n)
{
	int a;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		a = n % 10;
		_putchar(a + '0');
		print_number(n);
	}
}
