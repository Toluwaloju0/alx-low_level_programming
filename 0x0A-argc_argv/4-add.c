#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main - to print from stdout
* @argc: the number of char given to stdout
* @argv: the char to be printed from stdout
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
