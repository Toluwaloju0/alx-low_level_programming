#include "main.h"
#include <stdio.h>
/**
* puts_half - to input the other half of a string
* @str: string given
*/
void puts_half(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		int start = l / 2;
	}
	else
	{
		int start = (l - 1) / 2;
	}
	int i = start

	while (i <= l)
	{
		printf("%c", str[i]);
		i++
	}
	printf("\n");
}
