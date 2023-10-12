#include "calc.h"
/**
* op_add - to add two integers
* @a: the first integer
* @b: the second integer
* Return: the addition of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - to subtract two integers
* @a: the first integer
* @b: the second integer
* Return: the subtraction of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - to multiply two integers
* @a: the first integer
* @b: the second integer
* Return: the multiplication of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - to divide two integers
* @a: the first integer
* @b: the second integer
* Return: the division of a by b
*/

int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - to find the remainder of a divide by b
* @a: the first integer
* @b: the second integer
* Return: remainder of a divide by b
*/

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		exit(100);
	}
	return (a % b);
}
