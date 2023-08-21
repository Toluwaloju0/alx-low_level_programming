#include "main.h"
/**
* print_sign - to print the sign of a number
* @n: an integer
* Return: int
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_puchar(-);
		return (-1);
	}
}
