#include "function_pointers.h"
/**
* print_name - to print a name
* @name: the name to be printed
* @f: a function pointer
*/

void print_name(char *name, void (*f)(char *))

{
	f(name);
}
