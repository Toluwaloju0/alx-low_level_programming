#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - to perform simple calculations
* @argc: the count of argument given to main
* @argv: pointer to the argument
* Return: 0
*/

int main(int argc, char **argv)
{
	int i, j;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
		return (1);
	}
	printf("%d\n", func(i, j));
	return (0);
}
