#include "main.h"
#include <stdio.h>
/**
* print_to_98 - to print numbers up to 98
* @n: the number to start with
*/
void print_to_98(int n)
{
	printf("%d, ", n);
	int o = 98 - n;
	int p = n + 98;
	
	while (n <= 98)
	{
		int o = n + 1;

		printf("%d, " o);
		o++;
	}
	while (n >= 98
