#include "main.h"
#include <stdio.h>
/**
* puts2 - to prints the first character and jump the next
* @str: the string given
*/
void puts2(char *str)
{
	int i = char str;

	while (i % 2 == 0)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
