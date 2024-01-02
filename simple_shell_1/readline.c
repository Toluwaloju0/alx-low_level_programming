#include <stdio.h>
/**
* main - to get a line from stdin
* Return: 0 on sucess
*/

int main(void)
{
	int a;
	char *str, *get;
	FILE *stream = fopen("ict_js1.txt", "r");

	printf("$ ");
	str = fgets(get, 48, stream);
	if (str == NULL)
	{
		return (-1);
	}
	printf ("%s", str);
	return (0);
}
