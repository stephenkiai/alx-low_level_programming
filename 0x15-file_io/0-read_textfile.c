#include "main.h"
/**
 * read_textfile - reads and prints a text file it to the POSIX standard output
 * @filename: name of the file to be read.
 * @letters: number of letters to read and print.
 * Return: actual the number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, num_read, num_written, total_written = 0;
char *buffer;

if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}

buffer = malloc(sizeof(char) * (letters + 1));
if (!buffer)
{
close(fd);
return (0);
}

while ((num_read = read(fd, buffer, letters)) > 0)
{
buffer[num_read] = '\0';
num_written = write(STDOUT_FILENO, buffer, num_read);
if (num_written != num_read)
{
free(buffer);
close(fd);
return (0);
}
total_written += num_written;
}

free(buffer);
close(fd);

if (num_read == -1)
{
return (0);
}

return (total_written);
}
