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
	int l = 0;
	int minus = 0;
	int plus = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (isdigit(s[i]))
		{
			res = res * 10 + (s[i] - '0');
		}
		i++;
	}
	while (s[l] != '\0')
	{
		if (s[l] == '-')
		{
			minus = minus + 1;
			l++;
			continue;
		}
		else if (s[l] == '+')
		{
			plus = plus + 1;
			l++;
			continue;
		}
		else
		{
			l++;
			continue;
		}
	}
	if (minus > plus)
	{
		sign = -1;
	}
	return (res * sign);
}
