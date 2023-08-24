#include "main.h"
/**
* _isupper - to check if a character is uppercase
* @c: the character
* Return: 1 if upper and 0 if lower
*/
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
