#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

/*standard libraries*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <errno.h>

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
/*prototypes*/
int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t strlen(const char *s);
/*void print_error(char *message);*/
/*void print_usage(void);*/

#endif
