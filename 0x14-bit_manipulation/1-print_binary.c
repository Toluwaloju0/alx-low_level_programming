#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_binary - to print the binary of n
* @n: a number to be converted
*/

void print_binary(unsigned long int n)

{
	int e = 0;
	char *b[BUFSIZ];

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
	while (e < BUFSIZ && n > 0)
	{
		if ((n & 1) == 1)
		{
			b[e] = "1";
		}
		else
		{
			b[e] = "0";
		}
		n = n >> 1;
		e++;
	}
	e--;
	while (e >= 0)
	{
		printf("%s", b[e]);
		e--;
	}
}
