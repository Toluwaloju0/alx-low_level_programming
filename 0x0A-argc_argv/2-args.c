#include <stdio.h>
/**
* main - to print from stdout
* @argc: the number of char given to stdout
* @argv: the char to be printed from stdout
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
