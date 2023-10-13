#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
* print_all - to print based of format specifiers
* @format: the format to be checked
* @...: variadic string
*/

void print_all(const char * const format, ...)
{
	va_list i;
	size_t a = 0;
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
		}
		else if (format[a] == 'i')
		{
			printf("%d", va_arg(i, int));
		}
		else if (format[a] == 'f')
		{
			printf("%f", va_arg(i, double));
		}
		else if (format[a] == 's')
		{
			printf("%s", va_arg(i, char *));
		}
		else
		{
			a++;
			continue;
		}
		if (format[a + 1] == '\0')
		{
			printf("\n");
			return;
		}
		a++;
		printf("%s", j);
	}
}
