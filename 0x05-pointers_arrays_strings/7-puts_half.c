#include "main.h"
#include <stdio.h>
/**
* puts_half - to input the other half of a string
* @str: string given
*/
void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		int i = l / 2;
	}
	else
	{
		int i = (l - 1) / 2;
	}

	while (i <= l)
	{
		printf("%c", str[i]);
		i++
	}
	printf("\n");
}
