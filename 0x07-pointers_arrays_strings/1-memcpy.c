#include "main.h"
#include <string.h>
/**
* *_memcpy - to copy one string to another
* @dest: the destination string
* @src: the string to be copied
* @n: the number of times src is to be copied into dest
* Return: the edited character
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (src == NULL)
	{
		return (dest);
	}
	else
	{
		while (i < n && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	return (dest);
}
