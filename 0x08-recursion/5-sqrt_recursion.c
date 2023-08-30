#include "main.h"
/**
* _sqrt_recursion - to print the squareroot of an integer
* @n: the integer to be divided
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	int i = n / 2;

	if (n % i != 0)
	{
		return (-1);
	}
	return (i);
}
