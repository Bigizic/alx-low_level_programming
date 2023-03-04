#include "main.h"
#include <stdio.h>
/*header*/

/**
* print_number - prints an integer ..
* @n: int type ..
* Return: 0 if success ..
*/

void print_number(int n)
{
unsigned int i;

if (n < 0)
{
i = -n;
_putchar('-');
}
else
{
i = n;
}
if (i > 9)
{
print_number(i / 10);
}
_putchar(i % 10 + '0');
}
