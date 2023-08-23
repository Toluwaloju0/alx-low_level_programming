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
	char *d = dest;
	int l = strlen(str);

	while (*d != '\0')
	{
		d++;
	}
	while (l <= n)
	{
		*d = *src;
		*d++;
		*src++;
	}
	*d = '\0';
	return (dest);
}
