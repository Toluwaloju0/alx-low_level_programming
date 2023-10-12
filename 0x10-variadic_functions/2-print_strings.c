#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
* print_strings - to print a variadic string
* @n: the number of strings to be printed
* @separator: the char to be printed before each string
* @...: the variadic string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 1;
	va_list i;
	char *b;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(i, n);
	while (a < n)
	{
		b = va_arg(i, char *);
		if (b == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s%s", b, separator);
		a++;
	}
	b = va_arg(i, char *);
	if (b == NULL)
	{
		printf("(nil)\n");
		return;
	}
	printf("%s\n", b);
	va_end(i);
}
