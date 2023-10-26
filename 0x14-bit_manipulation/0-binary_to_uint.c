#include "main.h"
#include <string.h>
/**
* binary_to_uint - to convert binary ti decimal
* @b: a string of 0's and 1's
* Return: the decimal number
*/

unsigned int binary_to_uint(const char *b)

{
	unsigned int a = 0, c = strlen(b) - 1, d, e = 2;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0')
		{
			c--;
			b++;
			continue;
		}
		else if (*b == '1')
		{
			if (c == 0 && *b == '1')
			{
				a = a + 1;
				break;
			}
			for (d = 1; d < c; d++)
			{
				e = e * 2;
			}
			a = a + e;
			c--;
			b++;
			e = 2;
			continue;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (a);
}
