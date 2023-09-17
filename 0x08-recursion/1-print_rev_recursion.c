#include "main.h"
#include <string.h>
/** _print_rev_recursion - to print a string in reverse using recursion
* @s: the string to be reversed
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
