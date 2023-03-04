#include "main.h"
#include <stdio.h>
/*header*/

/**
* print_buffer - prints a buffer ..
* @b: char type...
* @size: int type ..
* Return: 0 if success .
*/

void print_buffer(char *b, int size)
{
int idx, col;

for (idx = 0; idx < size; idx += 10)
{
printf("%08x: ", idx);
for (col = idx; col < idx + 10; col += 2)
{
if (col < size)
printf("%02x", *(b + col));
else
printf("%2c", ' ');
if (col + 1 < size)
printf("%02x", *(b + col + 1));
else
printf("%2c", ' ');
putchar(' ');
}
for (col = idx; col < idx + 10; col++)
{
if (col < size)
putchar(*(b + col) < ' ' ? '.' : *(b + col));
}
putchar('\n');
}
if (size <= 0)
putchar('\n');
}
