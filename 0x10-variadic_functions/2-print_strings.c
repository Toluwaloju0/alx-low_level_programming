#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - to print a variadic string
* @separator: the string used to differentiate strings
* @n: the number of variadic functions
* @...: the variadic function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char *));
		if (i == n - 1)
		{
			printf("\n");
			return;
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		else
		{
			continue;
		}
	}
	va_end(strings);
}
