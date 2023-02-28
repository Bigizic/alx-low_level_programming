#include "main.h"
#include <stdio.h>

/**
* print_diagonal - prints diagonal line on the terminal
*@n: numbers of lines and columns
* Return: none
**/


void print_diagonal(int n)
{
int l, c;

for (l = 0; l < n; l++)
{
for (c = 0; c <= l; c++)
{
if (c != l)
{
putchar(' ');
}
else
{
putchar('\\');
}

}
putchar('\n');
}
if (n <= 0)
putchar('\n');
}
