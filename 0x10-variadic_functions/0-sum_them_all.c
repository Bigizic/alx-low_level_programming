#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/*header*/

/**
* sum_them_all - returns the sum of all it's parameters ..
* @n: int type ..
* Return: 0 if success ..
*/

int sum_them_all(const unsigned int n, ...)
{
int su = 0;
unsigned int i;
va_list args;
va_start(args, n);

if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
su += va_arg(args, int);
}
va_end(args);
return (su);
}
