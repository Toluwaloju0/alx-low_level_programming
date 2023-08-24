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
	int j;

	while (src[j] <= src[n])
	{
		dest[i + j] = dest[i];
		j++;
	}
	return (dest);
}
