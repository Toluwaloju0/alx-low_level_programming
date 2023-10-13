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
	int i = atoi(argv[2]), j = atoi(argv[4]), k;
	int (*op)(int, int) = (*get_op_func(argv[3]));

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	k = op(i, j);
	printf("%d\n", k);
	return (0);
}
