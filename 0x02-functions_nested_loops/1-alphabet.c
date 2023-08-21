#include "main.h"
/**
* print_alphabet - to print alphabets
* Return:null
*/
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
