#include <stdio.h>
/**
* main - to multiply two integers
* @argc: number of characters from execution
* @argv: the characters used during compilation
* Return: 0
*/
int main(int argc, char *argv)
{
	int c = 1;
	int d;

	if (argc != 3)
	{
		printf("error\n");
		exit(98);
	}

