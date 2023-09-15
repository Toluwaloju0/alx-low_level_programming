#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* random_password_generator - generate different passwords for 101-crackme
* @N: the number of password digit
*/
void random_password_generator(int N)
{
	int i = 0, random = 0;
	char numbers[] = "0123456789", letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", symbol[] = "!@#$^&*?";
	char password[N];

	srand((unsigned int)(time(NULL)));
	random = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbol[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = LETTER[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
/**
* main - to print generated password
* Return: 0
*/
int main(void)
{
	int N = 10;

	random_password_generator(N);
	printf("\n");
	return (0);
}
