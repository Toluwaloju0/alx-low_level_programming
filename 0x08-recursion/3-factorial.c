#include "main.h"
/**
* factorial - to find the factorial of a given number
* @n: the number to be factorized
* Return: the result of the factorization
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
