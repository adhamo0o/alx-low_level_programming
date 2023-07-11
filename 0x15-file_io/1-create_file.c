#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content  is a NULL terminated string to write to the file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, 'w');

	if (fd < 0)
		return (-1);

	if (text_content = NULL)
	{
		w = (fd, text_conent, strlen(text_content));
		if (w != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	
	}
	close(fd);

	return (1);
}
