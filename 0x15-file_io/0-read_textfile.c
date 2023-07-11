#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *let;
	ssize_t r, w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	let = malloc(sizeof(char) * letters);

	if (let == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, let, letters);
	w = write(STDOUT_FILENO, let, r);

	if (r != w)
	{
		free(let);
		close(fd);
		return (0);
	}

	free(let);
	close(fd);


	return (w);
}
