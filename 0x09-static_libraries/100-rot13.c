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
		a[i] + 13;
		i++;
	}
}
