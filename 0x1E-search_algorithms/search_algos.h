#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
