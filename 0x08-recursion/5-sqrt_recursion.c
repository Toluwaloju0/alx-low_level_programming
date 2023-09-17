#include "main.h"
/**
* _sqrt_recursion - to print the squareroot of an integer
* @n: the integer to be divided
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n / ((n / 2) - 1) ==  n)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
