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
	int i = 0;
	int minus = 0;
	int plus = 0;
	int sign = 1;

	while (s[i] !='\0')
	{
		if (isdigit(s[i]))
		{
			res = res * 10 + (s[i] - '0');
		}
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			minus = minus + 1;
			i++;
			continue;
		}
		else if (s[i] == '+')
		{
			plus = plus + 1;
			i++;
			continue;
		}
		else
		{
			i++;
			continue;
		}
		if (minus % 2 == 1)
		{
			sign = - 1;
		}
	}
	return (res * sign);
}
