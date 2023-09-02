#include "main.h"
#include <string.h>
/**
* *_strcpy - copy one string into another
* @dest: the destination string
* @src: the main string
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
