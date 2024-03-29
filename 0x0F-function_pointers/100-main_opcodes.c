#include <stdio.h>
#include <stdlib.h>

/**
 * main - To convert the function to opcodes
 * @argc: number of arguments passed to the program
 * @argv: Vector to the arguments
 * Return: None
 */

int main(int argc, char **argv)
{
	int a, b;
	unsigned char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (b = 0; b < a; b++)
	{
		if (b == a - 1)
		{
			printf("%02x\n", ptr[b]);
			break;
		}
		printf("%02x ", ptr[b]);
	}
	return (0);
}
