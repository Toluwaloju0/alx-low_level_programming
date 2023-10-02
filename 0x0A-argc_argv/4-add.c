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
	int i = 1, add = 0;

	while (i < argc)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		add = add + atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
