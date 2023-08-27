#include <stdio.h>
/**
* main - to print numbers 1 to 100
* Return: 0
*/
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
			a++;
			continue;
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
			a++;
			continue;
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
			a++;
			continue;
		}
		printf("%d ", a);
		a++;
	}
	printf("\n");
	return (0);
}
