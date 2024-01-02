#include <stdio.h>
/**
* main - to pint av without using ac
* @av: null terminated string array
* @ac: number of arguments
* Return: 0 on sucess
*/

int main(int ac, char **av)
{
	printf("ac = %d\n", ac);
	while (*av != NULL)
	{
		printf("%s\n", *av);
		*av++;
	}
	return (0);
}
