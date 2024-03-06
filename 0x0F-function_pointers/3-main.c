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
	int i = atoi(argv[1]), j = atoi(argv[3]), k;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	k = f(i, j);
	printf("%d\n", k);
	return (0);
}
