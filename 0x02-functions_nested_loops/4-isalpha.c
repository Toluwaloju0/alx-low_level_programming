#include "main.h"
/**
* _isalpha - to check for alphabets
* @c: alphabetic character
* Return: null
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
