#include <stdio.h>
/**
* main - to print without using printf and puts
* Return: 1
*/
int main(void)
{
	FILE *f = stderr;

	fprintf(f, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
