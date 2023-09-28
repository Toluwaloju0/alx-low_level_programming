#include "main.h"
/**
*_sqrt_recursion - to find the square root of a number
* @n: the number to be divided
* Return: the natural squareroot of n
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n / 2)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
