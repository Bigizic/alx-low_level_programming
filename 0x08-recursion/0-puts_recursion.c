#include "main.h"
#include <stdio.h>
/*header*/

/**
* _puts_recursion - prints a string ..
* @s: char type ..
* Return 0 if success ..
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar ('\n');
return;
}
putchar(*s);
s++;
_puts_recursion(s);
}
