#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
* print_all - to print based of format specifiers
* @format: the format to be checked
* @...: variadic string
*/

void print_all(const char * const format, ...)
{
	va_list i;
	int a = 0;
	char *j = ", ";

	if (format == NULL)
	{
		printf("(nil)\n");
		return;
	}
	va_start(i, format);
	while (format[a] != '\0')
	{
		if (format[a] == 'c')
		{
			putchar(va_arg(i, int));
			printf("%s", j);
			a++;
			continue;
		}
		else if (format[a] == 'i')
		{
			printf("%d%s, ", va_arg(i, int), j);
			a++;
			continue;
		}
		else if (format[a] == 'f')
		{
			printf("%f%s, ", va_arg(i, double), j);
			a++;
			continue;
		}
		else if (format[a] == 's')
		{
			printf("%s%s", va_arg(i, char *), j);
			a++;
			continue;
		}
		a++;
	}
}
