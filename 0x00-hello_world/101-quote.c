#include <stdio.h>
/**
* printf - to print without using printf and puts
* @c: character to be printed
* Return: 1
*/
int main(void) 
{
	FILE *file = stderr;
	fprintf(file, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
