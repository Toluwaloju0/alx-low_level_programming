#include <stdio.h>
/**
* main - to use argument to main
* @argc: an integer telling how many characters were passed
* @argv: a pointer to the character
* Return: 0
*/

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
