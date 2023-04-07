#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/stat.h>
/* headers */

/* prototype */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int two_files(char *file_from, char *file_to, size_t count);
int read2fun(size_t *read2, FILE **file1, int *file2, char **buffer);
int fd_value(int *i, int *j, char **file_from, int *file2, char **buffer);
int main(int argc, char *argv[]);
#endif
