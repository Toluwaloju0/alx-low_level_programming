#include "main.h"
/**
* set_string - to set the value of a pointer to a character
* @s: a pointer to a pointer to a character
* @to: the string to be copied
*/
void set_string(char **s, char *to)
{
	*s = to;
}
