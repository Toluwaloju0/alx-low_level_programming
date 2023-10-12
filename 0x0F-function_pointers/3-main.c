#include "calc.h"
#include <stdio.h>
/**
* main - to perform simple calculations
* @argc: the count of argument given to main
* @argv: pointer to the argument
* Return: 0
*/

int main(int argc, char *argv)
{
	int i = atoi(argv[2]), j = atoi(argv[4]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}


	return (0);
}
