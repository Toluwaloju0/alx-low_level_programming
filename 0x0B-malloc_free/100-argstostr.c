#include "main.h"
#include <stdlib.h>
/**
*argstostr - to contatenate argument given to main
* @ac: count of characters given to main
* @av: pointer to the characters given to a main
* Return: pointer to the string
*/

char *argstostr(int ac, char **av)
{
	char *i;
	int j, k, n = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = malloc(sizeof(char *) * ac);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			i[n] = av[j][k];
			n++;
		}
		i[n] = '\n';
		n++;
	}
	return (i);
}
