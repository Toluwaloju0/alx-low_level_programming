#include "main.h"
#include <stdio.h>
/**
* puts_half - to input the other half of a string
* @str: string given
*/
void puts_half(char *str)
{
	int l = 0;
	int i = l / 2;

	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
	while (i <= l)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
