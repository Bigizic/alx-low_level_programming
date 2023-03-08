#include "main.h"
#include <stdio.h>
/*header*/

/**
* _strlen_recursion - returns length of a string .
* @s: char type ..
* Return: length of string ..
*/

int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
