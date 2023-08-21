#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*  print_rev - print strings in reverse
* @s: a string
*/
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
