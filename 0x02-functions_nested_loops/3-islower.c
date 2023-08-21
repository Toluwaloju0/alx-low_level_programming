#include "main.h"
/**
* _islower - to check for a lower case
 *@c: a character
* Return: int
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
