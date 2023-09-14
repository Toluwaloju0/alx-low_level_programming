#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - to sum up variables
* @n: a constant variable showinr the amount of variables
* @...: a variadic function
* Return: an integer
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
