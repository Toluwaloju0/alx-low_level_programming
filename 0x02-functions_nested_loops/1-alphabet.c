#include <stdio.h>
#include "main.h"
#include <1-main.c>
/**
*print_alphabet - to print alphabet using putchar
*main - to print alphabets
*Return: void
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
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
