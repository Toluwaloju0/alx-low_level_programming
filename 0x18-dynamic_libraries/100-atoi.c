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
	int res = 0, i = 0, l = 0, minus = 0, plus = 0, sign = 1;

	while (s[l] != '\0')
	{
		if (isalpha(s[l + 1]))
		{
			break;
		}
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
		l++;
	}
	while (s[i] != '\0')
	{
		if (isdigit(s[i]))
		{
			res = res * 10 + (s[i] - '0');
			if (isalpha(s[i + 1]) || isalpha(s[i + 2]))
			{
				break;
			}
		}
		i++;
	}
	if (minus > plus || minus % 2 == 1)
	{
		sign = -1;
	}
	return (res * sign);
}
