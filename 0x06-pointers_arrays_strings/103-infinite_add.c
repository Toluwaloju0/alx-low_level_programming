#include "main.h"
#include <string.h>
#include <stdio.h>
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
	int carry = 0;
	int i = 0;
	int j = 0;
	int sum = 0;

	while (n1[i] != '\0' || n2[j] != '\0')
	{
		sum = carry + (n1[i] - '0') + (n2[j] - '0');
		if (i >= size_r - 1 || j >= size_r - 1 || sum > 9)
		{
			return (0);
		}
		r[i] = sum % 10 + '0';
		carry = sum / 10;
		i++;
		j++;
	}
	if (carry != 0)
	{
		if (i >= size_r - 1)
		{
			return (0);
		}
		r[i] = carry + '0';
		i++;
	}
	r[i] = '\0';
	return (r);
}
