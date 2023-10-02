#include <stdio.h>
/**
* main - to print the number of characters passed to a function
* @argc: the number of characters passed to the function
* @argv: pointer to the characters passedto the function
* Return: 0
*/

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
