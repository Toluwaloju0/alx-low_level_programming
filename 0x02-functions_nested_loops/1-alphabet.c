#include <stdio.h>
#include "main.h"
/**
*print_alphabet - to print alphabet using putchar
*Return: void
*/

void print_alphabet(void);

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
