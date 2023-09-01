#include "main.h"
#include <string.h>
/**
* *_strncpy - copies one string to another
* @dest: the destination string
* @src: the string to be copied
* @n: number of lines to be copied
* Return: dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
