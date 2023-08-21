#include "main.h"
/**
*  print_rev - print strings in reverse
* @s: a string
*/
void print_rev(char *s)
{
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
