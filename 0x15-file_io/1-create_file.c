#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
* create_file - to create a file
* @filename: the files name
* @text_content: the content of the file
* Return: the number of the file
*/

int create_file(const char *filename, char *text_content)

{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
