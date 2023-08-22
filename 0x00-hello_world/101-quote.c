#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
* main - to print to stdopt without using printf or puts
* Return: integer
*/
int main() 
{
		int fd = open("/dev/stderr", O_WRONLY);
		if (fd == -1)
	{
		return 1;
	}
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(fd, message, strlen(message));
	close(fd);
	return 1;
}

