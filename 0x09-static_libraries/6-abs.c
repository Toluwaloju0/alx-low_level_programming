#include "main.h"
/**
* _abs - to print absolute value
* @a: an integer
* Return: int
*/
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
	_putchar('\n');
}
