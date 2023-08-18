#include "main.h"

/**
* main - returns the largest of 3 numbers
* largest - highest of numbers
* Return: largest
*/

int main(largest)
{
	int a;
	int b;
	int c;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
