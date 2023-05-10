#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: name of the file to read
 *@letters: number of letters should read
 *Return: number of letters
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
size_t x, y;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
x = read(fd, buffer, letters);
y = write(STDOUT_FILENO, buffer, x);
if (x != y)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (y);
}
