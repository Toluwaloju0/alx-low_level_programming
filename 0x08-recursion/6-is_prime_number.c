#include "main.h"
/**
* is_prime_number - to check if a number is a prime number
* @n: the number to be checked
* Return: i if n is a prime number and 0 if n is not prime number
*/
int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0)
	{
		return (0);
	}
	else if (n % is_prime_number(n - 1) == 0);
	{
		return (1);
	}
}
