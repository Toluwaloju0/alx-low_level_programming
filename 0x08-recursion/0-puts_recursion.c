#include "main.h"
#include <string.h>
/**
* _puts_recursion - to print a string
* @s: the string to be printed
*/
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s[0]++;
	_puts_recursion(s - s[0]);
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
}
