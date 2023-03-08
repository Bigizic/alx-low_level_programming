#include "main.h"
#include <stdio.h>
/*header*/

/**
* factorial - returns the factorial of a given number ..
* @n: int type ..
* Return: factorial of n..
*/

int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
