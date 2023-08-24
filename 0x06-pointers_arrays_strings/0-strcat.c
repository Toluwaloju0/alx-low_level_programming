#include "main.h"
#include <string.h>
/**
* *_strcat - to concatenate two strings toghether
* @dest: the destination string
* @src: the string to be concatenated
* Return: new string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);
	int j = 0;
	char ptr;

	while (src[j] != '\0')
	{
		dest[i + j] = ptr[i + j];
		j++;
	}
	ptr = dest;
	return (dest);
}
