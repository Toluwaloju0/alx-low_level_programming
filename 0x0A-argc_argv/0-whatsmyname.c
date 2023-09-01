#include <stdio.h>
/**
* main - to print the argument given to the stdout
* @argc: the number of char given to stdout
* @argv: the string containing the characters
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s", argv[i]);
		i++;
	}
	printf("\n");
	return (0);
}
