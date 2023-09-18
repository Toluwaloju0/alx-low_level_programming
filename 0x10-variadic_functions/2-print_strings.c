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
	char *str;

	if (n == 0)
	{
		printf("\n");
	}
	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
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
