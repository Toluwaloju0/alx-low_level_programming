#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
* append_text_to_file - to append a text to a file
* @filename: the name of the file
* @text_content: the text to be appended
* Return: 1 on sucess, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)

{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
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
