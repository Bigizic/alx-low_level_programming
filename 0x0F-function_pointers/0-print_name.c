#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/*header*/

/**
* print_name - prints a name ..
* @name: char pointer ..
* @f: void pointer ..
* Return: 0 if success ..
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
