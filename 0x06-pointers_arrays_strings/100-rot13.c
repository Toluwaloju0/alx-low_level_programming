#include "main.h"
#include <ctype.h>
/**
* *rot13 - to change a character to the one after 13 characters
* @a: the string to be changed
* Return: the edited character
*/
char *rot13(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (isalpha(a[i]))
		{
			a[i] = a[i] + 13;
			if (a[i] > 'z' || a[i] > 'Z')
			{
				a[i] = a[i] - 26;
			}
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}
	return (a);
}
