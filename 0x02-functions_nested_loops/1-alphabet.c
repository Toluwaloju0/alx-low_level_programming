#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
