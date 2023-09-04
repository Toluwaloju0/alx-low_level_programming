#include <stdio.h>
/**
*main - Entry point
*Description - to Print only the smallest combination of three digits
*Return: 0
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j <= i)
			{
				continue;
			}
			for (k = 48; k <= 57; k++)
			{
				if (k <= j)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
