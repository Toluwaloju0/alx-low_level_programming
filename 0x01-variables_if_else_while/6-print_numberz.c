#include <stdio.h>
/**
*main - Entry point
*Description - print numbers 0-9 using putchar
*Return: 0
*/
int main(void)
{
	int a = 48;

	while (a <= 57)
		{
		putchar(a);
		a++;
		}
	putchar('\n');
	return (0);
}
