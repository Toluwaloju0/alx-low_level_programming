#include "main.h"
#include <string.h>
/**
* *_strcat - to concacate two strings toghether
* @dest: the destination string
* @src: the string to be concacated
* Return: new string dest
*/
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0')
	{
		*d = *src;
		*d++;
		*src++;
	}
	*d = '\0';
	return (dest);
}
