#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
* _atoi - to change strings to integers
* @s: a character with strings
* Return: integer
*/
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] !='\0')
	{
		if (isspace(s[i]))
		{
			i++;
			continue;
		}
		if (s[i] == '-' || s[i] == '+')
		{
			sign = (s[i] == '-') ? -1 : 1;
			i++;
		}
		if (!isdigit(s[i]))
		{
			break;
		}
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
