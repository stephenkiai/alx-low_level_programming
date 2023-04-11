#include "main.h"
/**
 * print_error - Prints an error message to standard error.
 * @message: The error message to print.
 */
void print_error(char *message)
{
dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * print_usage - Prints the usage message to standard error.
 */
void print_usage(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_count, write_count;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
print_usage(void);
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
print_error("Can't read from file");
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
print_error("Can't write to file");
exit(99);
}
while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
write_count = write(fd_to, buffer, read_count);
if (write_count != read_count)
{
print_error("Write error");
exit(99);
}
}
if (read_count == -1)
{
print_error("Read error");
exit(98);
}
if (close(fd_from) == -1)
{
print_error("Can't close fd");
exit(100);
}
if (close(fd_to) == -1)
{
print_error("Can't close fd");
exit(100);
}
return (0);
}
