#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - to read a ext file and print it to stdout
* @filename: the name if the file
* @letters: the number of letters
* Return: the number of letters read and printed
*/
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer[BUFSIZ + 1];
	size_t n = 0, a = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	n = read(fd, buffer, letters);
	if (n == 0)
	{
		close(fd);
		return (0);
	}
	a = write(STDOUT_FILENO, buffer, n);
	if (a == 0)
	{
		return (0);
	}
	close(fd);
	return (a);
}
