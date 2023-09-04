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
	int i = 1;
	int sum = 0;

	if (i == argc)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (atoi(argv[i]) < 0)
		{
			i++;
			continue;
		}
		else if (isdigit(atoi(argv[i])) != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
