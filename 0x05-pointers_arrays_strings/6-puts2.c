#include "main.h"
#include <stdio.h>
/**
* puts2 - to prints the first character and jump the next
* @str: the string given
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}
