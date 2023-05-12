#include "main.h"
#include <string.h>
/**
 *create_file -  a function that creates a file.
 *@filename: name of the file
 *@text_content: content writed in the file.
 *Return: 1 on success, -1 on failure
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
int fd;
size_t x;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
}
close(fd);
return (1);







}