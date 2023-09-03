#include <stdio.h>
/**
* main - to print all combination of two digit numbers
* Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j == i)
			{
				j++;
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 57 && j == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
