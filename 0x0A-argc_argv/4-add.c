#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main - to print from stdout
* @argc: the number of char given to stdout
* @argv: the char to be printed from stdout
* Return: 0
*/
int main(int argc, char* argv[])
{
	int i = 0;
	int sum = 0;

	if (argv != isalpha(*argv))
	{
		printf("0\n");
	}
	while (i < argc)
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
			printf("%d\n", sum);
		}
		i++;
	}
	return (0);
}
