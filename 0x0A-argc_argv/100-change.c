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
/*	int j = 0, i = atoi(argv[1]);*/

	if (argc < 2 || argc > 2)
	{
		printf("%s\n", argv[0]);
		printf("Error\n");
		return (1);
	}
/*	while (i > 0)
	{
		if (i > 25)
		{
			j = j + (i / 25);
			i = i % 25;
		}
		if (i > 10)
		{
			j = j + (i / 10);
			i = i % 10;
		}
		if (i > 5)
			{
			j = j + (i / 5);
			i = i % 5;
		}
		if (i > 2)
		{
			j = j + (i / 2);
			i = i % 2;
		}
		if (i == 1)
		{
			j = j + 1;
		}
	}*/
	return (0);
}
