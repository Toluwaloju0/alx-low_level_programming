#include <stdio.h>
#include "main.c"
#include "main.h"
/**
*print_alphabet_x10 - print alphabets 10 times
*Return: void
*/
void print_alphabet_x10(void)
{
	int b = 0;
	int c;

	while (b < 10)
	{
		int c = 97;

		while (c < 123)
		{
			putchar(c);
			c++;
		}

		putchar('\n');
		b++;
	}
}

/**
*main - check the code
*Return: 0
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}
