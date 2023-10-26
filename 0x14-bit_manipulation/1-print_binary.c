#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_binary - to print the binary of n
* @n: a number to be converted
*/

void print_binary(unsigned long int n)

{
	int a;
	std: :string bin = "";

	for (a = 31; a >= 0; --a)
	{
		if (n & (1 << a))
		{
			bin += "1";
			printf("%s", bin);
		}
		else
		{
			bin += "0";
			printf("%s", bin);
		}
	}
	return;
}
