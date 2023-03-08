#include "main.h"
#include <stdio.h>
/*header*/

/**
* _print_rev_recursion - prints a string in reverse..
* @s: char type .
* Return: 0 if success ..
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
