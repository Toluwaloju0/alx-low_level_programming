#include <stdio.h>
#include <unistd.h>
#include <limits.h>
/**
* main - to print current id number
* Return: 0
*/

int main(void)
{
	pid_t p, q;

	p = getpid();
	q = getppid();
	printf("current id process is %u\n", p);
	printf("parent address is %u\n", q);
	printf("maximum int value is %d\n", PID_MAX);
	return (0);
}
