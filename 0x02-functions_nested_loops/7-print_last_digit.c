#include "main.h"
/**
* print_last_digit - to print the last digit of a number
* @a: an integer
* Return: int
*/
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		a = -a;
	}
	b = a % 10;
	if (b < 0)
	{
		b = -b;
	}
	_putchar(b = '0');
	return (b);
}
