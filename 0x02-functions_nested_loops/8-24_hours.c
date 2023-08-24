#include "main.h"
/**
* jack_bauer - to print all the minutes of his life
*/
void jack_bauer(void)
{
	int i = 00;
	int l = 00;

	while (i < 24)
	{
		while (l < 60)
		{
			_putchar(i':'l);
			l++;
		}
		i++;
	}
}
