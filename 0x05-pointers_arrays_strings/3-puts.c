#include "main.h"
/**
* _puts - to print a string
* @str: a string to be printed on stdout
*/
void _puts(char *str)
{
	return (write(1, &*str, 1));
}
