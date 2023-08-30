#include "main.h"
#include <string.h>
/** _print_rev_recursion - to print a string in reverse using recursion
* @s: the string to be reversed
*/
void _print_rev_recursion(char *s)
{
	int i = strlen(s) - 1;

	if (i <= 0)
	{
		s[i] = '\0';
		_putchar('\n');
	}
	_putchar(s[i]);
	i--;
	_print_rev_recursion(s);
}
