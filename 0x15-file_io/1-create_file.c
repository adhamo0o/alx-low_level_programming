#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		w = write(fd, text_content, strlen(text_content));

		if (w != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
