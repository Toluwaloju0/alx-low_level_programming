#include <stdio.h>
/**
* main - to print arguments passed to the program
* @argc: the number of argument passed to the function
* @argv: pointer to the arguments passed to the function
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
