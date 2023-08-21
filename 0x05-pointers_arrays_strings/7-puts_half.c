#include "main.h"
#include <stdio.h>
/**
* puts_half - to input the other half of a string
* @str: string given
*/
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}
