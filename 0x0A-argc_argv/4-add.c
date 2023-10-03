#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - to print the result of the addition of numbers
* @argc: the number of arguments passed to the program
* @argv: pointer to the arguments passed to the program
* Return: 0;
*/

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
