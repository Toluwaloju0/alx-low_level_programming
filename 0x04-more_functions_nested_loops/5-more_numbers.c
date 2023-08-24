#include "main.h"
/**
* more_numbers - to print from number 0 to 14
*/
void more_numbers(void)
{
	_putchar(0);
	int a = 0;

	while (a < 15)
	{
		_putchar(a + 1);
		a++;
	}
	_putchar('\n');
}
