#include "main.h"
#include <stdio.h>

/**
* print_square - prints a square
* @size: size of square
* Return: none
**/

void print_square(int size)
{
int l, c;

if (size <= 0)
putchar('\n');
for (l = 0; l < size; l++)
{
for (c = 0; c < size; c++)
{
putchar('#');
}
putchar('\n');
}
}
