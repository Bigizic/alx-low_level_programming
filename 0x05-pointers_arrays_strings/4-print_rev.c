#include "main.h"
#include <Stdio.h>
/*header*/

/**
* print_rev - prints a string in reverse ..
* @s: char type ..
* Return: 0 if success ..
*/

void print_rev(char *s)
{
int c;
char p;

for (c = 0; s[c] != 0; c++)
{
}

for (c = c - 1; c >= 0; c--)
{
p = s[c];
putchar(p);
}
putchar('\n');
}
