#include "main.h"
#include <ctype.h>
/**
* *cap_string - to capitalize the words of a string
* @a: the string to be edited
* Return: the edited character
*/
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] == a[0] || a[i - 1] == ' ')
		{
			a[i] = toupper(a[i]);
		}
		else if (a[i - 1] == '\n' || a[i - 1] == '\t')
		{
			a[i] = toupper(a[i]);
		}
		else if (a[i - 1] == ';' || a[i - 1] == '.')
		{
			a[i] = toupper(a[i]);
		}
		else if (a[i - 1] == '!' || a[i - 1] == '?')
		{
			a[i] = toupper(a[i]);
		}
		else if (a[i - 1] == '"' || a[i - 1] == ',')
		{
			a[i] = toupper(a[i]);
		}
		else if (a[i - 1] == '(' || a[i - 1] == ')')
		{
			a[i] = toupper(a[i]);
		}
		else if (a[i - 1] == '{' || a[i - 1] == '}')
		{
			a[i] = toupper(a[i]);
		}
		i++;
	}
	return (a);
}
