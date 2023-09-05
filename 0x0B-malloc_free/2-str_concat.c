#include "main.h"
#include <string.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i = strlen(s1);
	int j = strlen(s2);
	int l = 0;
	int m = 0;
	char *k;

	k = malloc(sizeof(char) * (i + j));
	while (*s1 != '\0')
	{
		k[l] = s1[l];
		l++;
	}
	while (*s2 != '\0')
	{
		k[l + m] = s2[m];
		m++;
	}
	return (k);
}
