#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/*header*/

/**
* print_strings - prints strings followed by a line ..
* @separator: char type ..
* @n: int type ..
* Return: 0 if success ..
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
const char* str = va_arg(args, const char*);
if (str == NULL)
{
printf("(nil)");
}
printf("%s", str);
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
