#include "main.h"
/**
* print_most_numbers - to print all numbers except 2 and 4
*/
void print_most_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		if (a == 50 || a == 52)
		{
			a++;
			continue;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
