#include "main.h"
#include <math.h>
/**
* _pow_recursion - to raise int x to the power of int y
* @x: the integer to be acted upon
* @y: the power to be raised to
* Return: the integer x raised to y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
