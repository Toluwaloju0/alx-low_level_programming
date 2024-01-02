#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_binary - to print the binary of n
* @n: a number to be converted
*/

void print_binary(unsigned long int n)

{
	unsigned long int a = 1, c, d = 10, e;

	if (n == 0)
	{
		printf("0");
		return;
	}
	else if (n == 1)
	{
		printf("1");
		return;
	}
	c = n & a;
	if (c == 1)
	{
		e = 1;
	}
	a = a << 2;
	while (a < n)
	{
		c = n & a;
		if (c == 1)
		{
			e = d + e;
		}
		d = d * 10;
		a = a << 1;
	}
	printf("%lu", e);
	return;
}
