#include "main.h"
#include <string.h>
/**
* _puts_recursion - to print a string
* @s: the string to be printed
*/
void _puts_recursion(char *s)
{
	int i;
	_putchar(s[i]);
	s++;
	if (s[i] != '\0')
	{
		_puts_recursion(s);
	}
}
