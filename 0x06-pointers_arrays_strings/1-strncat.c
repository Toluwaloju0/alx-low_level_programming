#include "main.h"
#include <string.h>
/**
* *_strncat - to concacate n number of strings to destination
* @dest: the destination string
* @src: the concacated string
* @n: an integer pointing how many characters would be concacated
* Return: destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
