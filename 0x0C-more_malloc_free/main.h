#ifndef MAIN_H
#define MAIN_H
#define MAX_DIGITS 10
#include "ut.h"

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
void condition(int argc, char *argv[], int i, int j);
void print_number(int mul, int numD);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
int get_digit(char c);
int main(int argc, char *argv[]);
#endif
