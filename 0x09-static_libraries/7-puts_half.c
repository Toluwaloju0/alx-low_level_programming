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
	int j;

	if (i % 2 == 1)
	{
		j = (i + 1) / 2;
	}
	else if (i % 2 == 0)
	{
		j = i / 2;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	putchar('\n');
}
