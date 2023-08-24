#include "main.h"
#include <ctype.h>
/**
* *string_toupper - to change all lowercase character to upper cases
* @ptr: the string to be edited
* Return: the edited character
*/
char *string_toupper(char *ptr)
{
	int a = 0;

	while (ptr[a] != '\0')
	{
		ptr[a] = toupper(ptr[a];
		a++;
	}
	return (ptr)
}
