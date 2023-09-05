#include"main.h"
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
		a[i] = a[i] + 13;
		if (a[i] > 90)
		{
			a[i] = 60 + (a[i] - 26);
		}
		i++;
	}
	return (a);
}
