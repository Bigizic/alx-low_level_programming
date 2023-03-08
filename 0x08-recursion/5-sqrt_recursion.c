#include "main.h"
#include <stdio.h>
/*header*/

/**
* _sqrt_recursion - return the natural square root of a number ..
* @n: int type .
* Return: 0 if success ..
*/

int _sqrt_recursion(int n)
{
return (natural_square(n, 1));
}

/**
* natural_square - finds natural square ..
* @x: int type ..
* @y: int type ..
* Return: 0 if success ..
*/

int natural_square(int x, int y)
{
int s = y * y;
if (s > x)
{
return (-1);
}
if (s == x)
{
return (y);
}
return (natural_square(x, y + 1));
}
