#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_number - to print an integer
* @n: the integer to be printed
*/
void print_number(int n)
{
	char s[20];
	int a = 0;
	int b;
	int c = 0;

	while (n != 0)
	{
		b = n % 10;
		s[a] = b + '0';
		n = n / 10;
		a++;
	}
	while (c < 20)
	{
		_putchar(s[c]);
		c++;
	}
}
