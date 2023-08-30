#include "main.h"
/**
* is_prime_number - to check if a number is a prime number
* @n: the number to be checked
* Return: i if n is a prime number and 0 if n is not prime number
*/
int is_prime_number(int n)
{
	if (n %  == 0)
	{
		return (0);
	}
	if (  > 0)
	{
		n--;
		is_prime_number(n);
	}
	return (1);
	
}
