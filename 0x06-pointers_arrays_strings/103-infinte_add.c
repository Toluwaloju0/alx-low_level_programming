#include "main.h"
#include <string.h>
/**
* *infinite_add - to add two numbers
* @n1: the first number
* @n2: the second number
* @r: the buffer to hold the result
* @size_r: the size of r
* Return: the added character
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	size_r = strlen(r);
	r = n1 + n2;

