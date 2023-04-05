#ifndef UT_H
#define UT_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* function prototype */
int find_len(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
#endif
