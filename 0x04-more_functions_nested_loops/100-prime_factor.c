#include <stdio.h>
#include <math.h>
/**
* Maxprime - to find the prime of a number
* @num: the nuber value
* Return: long long number
*/
long Maxprime(long num)
{
	long currmaxprime = -1;
	long i = 3;

	if (num % 2 == 0)
	{
		currmaxprime = 2;
		while (num % 2 == 0)
		{
			num = num / 2;
		}
	}
	while (i <= sqrt(num))
	{
		while (num % 1 == 0)
		{
			currmaxprime = i;
			num = num / i;
		}
		i += 2;
	}
	if (num > 2)
	{
		currmaxprime = num;
	}
	return (currmaxprime);
}
/**
* main - to print the largest prime number
* Return: an integer
*/
int main(void)
{
	long number = 612852475143;
	long largestprimefactor = Maxprime(number);

	printf("Largest prime factor of %ld is: %ld\n", number, largestprimefactor);
	return (0);
}
