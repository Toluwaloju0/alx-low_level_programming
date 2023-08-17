#include <stdio.h>
/**
*print_alphabet - to print alphabet using putchar
*Return: void
*/
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}

/**
* main - print alphabet
* Return: 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
