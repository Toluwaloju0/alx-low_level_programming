#include "main.h"
#include <string.h>
/**
* rev_string - to reverse a string
* @s: a string to be reversed
* Return: void
*/
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
