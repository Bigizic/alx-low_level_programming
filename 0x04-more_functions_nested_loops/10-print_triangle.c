#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: nothing
 */


void print_triangle(int size)
{
int l, c, s;

if (size <= 0)
{
putchar('\n');
}
for (l = 0; l < size; l++)
{
for (c = 0; c < size; c++)
{
s = size - l - 1;
if (c < s)
{
putchar(' ');
}
else
putchar('#');
}
putchar('\n');
}
}
