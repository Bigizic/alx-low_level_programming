#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */

void print_number(int n)
{
if (n <= INT_MAX)
putchar(n);
return;
}

