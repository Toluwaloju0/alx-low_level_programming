#include "main.h"
/**
* _isdigit - to check if a character is digit
* @c: the character number on ascii table
* Return: 1 if digit and 0 if non-digit
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
