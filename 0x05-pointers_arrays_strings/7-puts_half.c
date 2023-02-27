#include "main.h"
#include <stdio.h>
/*header*/

/**
* _strlen - get the length of a string ..
* @s: char type ..
* Return: 1 if success ..
*/


void puts_half(char *str)
{
int c = 0, i, d;

for (i = 0; str[i]; i++)
c++;
if (c % 2 == 0)
{
i = c / 2;
}
else
{
d = (c - 1) / 2;
i = c - d;
}
for (i = 0; i < c; i++)
{
putchar(str[i]);
}
putchar('\n');
}
