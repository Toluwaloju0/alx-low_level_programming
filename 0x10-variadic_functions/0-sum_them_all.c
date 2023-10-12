#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - to sum all the integers of a variadic elipsis
* @n: the number of integers in the function
* @...: the variadic elipsis
* Return: sum 0f the digits
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list i;
	int sum = 0;
	unsigned int j = 1;

	if (n == 0)
	{
		return (0);
	}
	va_start(i, n);
	while (j <= n)
	{
		sum = sum + va_arg(i, int);
		j++;
	}
	va_end(i);
	return (sum);
}
