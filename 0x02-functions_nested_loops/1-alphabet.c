#include <stdio.h>
#include "main.h"
/**
* main - to print lowercase alphabets
* no Return
*/
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
