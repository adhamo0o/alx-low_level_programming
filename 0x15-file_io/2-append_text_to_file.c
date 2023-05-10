#include "main.h"
#include <string.h>
/**
 *append_text_to_file - a function that appends text at the end of a file.
 *@filename: name of the file
 *@text_content: string to add at the end of the file
 *Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
size_t x;
int fd;
if (!filename)
return (-1);
fd = open(filename, O_APPEND | O_WRONLY);
if (fd < 0)
return (-1);
if (text_content != NULL)
{
x = write(fd, text_content, strlen(text_content));
if (x != strlen(text_content))
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
}
