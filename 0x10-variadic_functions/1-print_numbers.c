#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_numbers - to print numbers in a variadic funtion
* @separator: a string to seperate the numbers
* @n: the numbers of variadic characters
* @...: the variadic function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (i == n - 1)
		{
			printf("\n");
			return;
		}
		if (*separator == '\0')
		{
			printf(" ");
		}
		printf("%s ", separator);
	}
	va_end(print);
}
