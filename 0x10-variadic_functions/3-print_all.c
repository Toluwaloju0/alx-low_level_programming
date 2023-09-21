#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - to print anything
* @format: srguments passed to the function
*/
void print_all(const char * const format, ...)
{
	char c, *s;
	va_list form;
	float f;
	int i;

	while (*format != '\0')
	{
		if (*format == 'c')
		{
			c = va_arg(form, int);
			printf("%c", c);
		}
		else if (*format == 'i')
		{
			i = va_arg(form, int);
			printf("%d", i);
		}
		else if (*format == 'f')
		{
			f = va_arg(form, double);
			printf("%f", f);
		}
		else if (*format == 's')
		{
			s = va_arg(form, char *);
			if (s == NULL)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", s);
		}
	}
	va_end(form);
	printf("\n");
}
