#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
* main - to cp a file to another file
* @ac: number of arguments passed to the function
* @av: strings passed to the function
* Return: 0 on sucess
*/

int main(int ac, char **av);
int main(int ac, char **av)

{
	int fd1, fd2, wrn, wrte;
	off_t fl, a = 0;
	char *buf[BUFSIZ + 1];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDWR);
	fd2 = open(av[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file     %s\n", av[1]);
		exit(98);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",     av[2]);
		exit(99);
	}

	fl = lseek(fd1, 0, SEEK_END);
	while (a <= fl)
	{
		lseek(fd1, a, SEEK_SET);
		wrn = read(fd1, buf, 1024);
		if (wrn < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		wrte = write(fd2, buf, wrn);
		if (wrte < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		a += 1024;
	}
	wrn = close(fd1);
	if (wrn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	wrte = close(fd2);
	if (wrte == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}
