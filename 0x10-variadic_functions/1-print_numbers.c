#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/*header*/

/**
* print_numbers - prints number followed by a new line ..
* @separator: char type ..
* @n: int type ..
* Return: 0 if success .
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int j;
va_list args;
va_start(args, n);
if (separator == NULL)
{
return;
}
for (i = 0; i < n; i++)
{
j = va_arg(args, int);
printf("%d%s", j, separator);
}
printf("\n");
}
