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


/*prototypes*/
int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t strlen(const char *s);
/*void print_error(char *message);*/
/*void print_usage(void);*/

#endif
