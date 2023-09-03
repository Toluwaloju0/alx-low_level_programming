#include <stdio.h>
/**
* main - to print all combination of two digit numbers
* Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j <= i)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
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
