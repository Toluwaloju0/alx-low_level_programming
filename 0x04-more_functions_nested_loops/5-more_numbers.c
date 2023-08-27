#include "main.h"
/**
* more_numbers - to print from number 0 to 14
*/
void more_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar('0' + (b / 10));
			}
			_putchar('0' + (b % 10));
			b++;
		}
		_putchar('\n');
		a++;
	}
}
