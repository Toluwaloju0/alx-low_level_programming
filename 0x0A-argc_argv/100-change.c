#include <stdio.h>
#include <stdlib.h>
/**
* main - to print the number of coins to make change for an amount of money
* @argc: the number of characters passed to the program
* @argv: pointer to the charactyers passed to the program
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0)
	{
		if (i >= 25)
		{
			i = i - 25;
			j++;
		}
		else if (i >= 10)
		{
			i = i - 10;
			j++;
		}
		else if (i >= 5)
		{
			i = i - 5;
			j++;
		}
		else if (i >= 2)
		{
			i = i - 2;
			j++;
		}
		else if (i == 1)
		{
			i = i - 1;
			j++;
		}
	}
	printf("%d\n", j);
	return (0);
}
