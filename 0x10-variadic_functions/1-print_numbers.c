#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
* print_numbers - to print varaidic numbers
* @separator: the char to be printed after each number
* @n: the number of arguments
* @...: the variadic arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list a;

	if (separator == NULL)
	{
		separator = "";
	}
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(a, n);
	while (i < n)
	{
		printf("%d%s", va_arg(a, int), separator);
		i++;
	}
	printf("%d\n", va_arg(a, int));
	va_end(a);
}
