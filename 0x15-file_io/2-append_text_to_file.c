#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	size_t w;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp < 0)
		return (-1);

	if (text_content)
	{
		w = write(fp, text_content, strlen(text_content));
		if (w != strlen(text_content))
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);

	return (1);
}
