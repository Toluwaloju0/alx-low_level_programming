#include <stdio.h>
#include <math.h>
int is_prime(int num)
{
	int i;
	
	for (i = 2; 1 <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
* main - to print the prime factor of a number
* Return: 0
*/
int main(void)
{
	long int number = 6128524751433;
	long int largest_factor = 0;

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			if (is_prime(i))
			{
				largest_factor = i;
			}
			while (number % i == 0)
			{
				number /= i;
			}
		}
	}
}
