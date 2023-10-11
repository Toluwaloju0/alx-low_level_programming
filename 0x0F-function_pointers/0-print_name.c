#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - to print a name
* @name: the name to be printed
* @f: a function pointer
*/

void print_name(char *name, void (*f)(char *))

{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
