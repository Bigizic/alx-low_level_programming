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
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != n - 1)
{
if (separator)
{
printf("%s", separator);
}
}
}
printf("\n");
va_end(args);
}
