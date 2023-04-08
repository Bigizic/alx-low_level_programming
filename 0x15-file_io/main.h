#ifndef MAIN_H
#define MAIN_H

#define BUFFER 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <elf.h>

/* headers */

/* prototype */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void readError(int f1, char *buff, char *av);
void writeError(int f2, char *buff, char *av);
void closeError(int f2, char *buff);

#endif
