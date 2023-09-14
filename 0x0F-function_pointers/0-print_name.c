#include "function_pointers.h"
/**
* print_name - a function which prints a name
* @name: the name to be printed
* @f: a function pointer which takes in a char and returns void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
