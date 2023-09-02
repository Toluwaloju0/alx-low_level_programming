#include "main.h"
/**
* factorial - to print the factorial of an integer
* @n: the number given to factorial
* Return: the factorised number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
