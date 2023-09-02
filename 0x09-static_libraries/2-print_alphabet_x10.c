#include "main.h"
/**
*print_alphabet_x10 - print alphabets 10 times
*Return: void
*/
void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		int c = 97;

		while (c < 123)
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		b++;
	}
}
