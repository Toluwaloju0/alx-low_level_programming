#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts_half - to input the other half of a string
* @str: string given
*/
void puts_half(char *str)
{
	int i = strlen(str);
	int l = i / 2;

	while (l <= i)
	{
		putchar(str[l]);
		l++;
	}
	putchar('\n');
}
