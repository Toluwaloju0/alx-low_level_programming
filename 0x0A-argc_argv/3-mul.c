#include <stdio.h>
#include <stdlib.h>
/**
* main - to multiply the numbers passed to the program
* @argc: the number of characters passed to the program
* @argv: pointer to the characters passed to the program
* Return: 0
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
