#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFSIZE 1024

void close(int fd);

/**
* main - functioon copy the content from file to another file
* @argc: arg count
* @argv: arg vector
*
* Return: 1 always
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, x, y;
	char buff[BUFFSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		x = read(fd_from, buff, BUFFSIZE);

		if (fd_from < 0 || x < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		y = write(fd_to, buff, x);

		if (fd_to < 0 || y < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (x);

	close(fd_from);
	close(fd_to);

	return (0);
}

/**
* close - function close the fd
* @fd: file decriptor
*/
void close(int fd)
{
	if (close(fd) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
