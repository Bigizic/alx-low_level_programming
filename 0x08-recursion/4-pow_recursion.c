#include "main.h"
#include <stdio.h>
/*header*/

/**
* _pow_recursion - returns the value of x raised to the power of y..
* @x:int type ..
* @y: int type ..
* Return: 0 if success ..
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (x == 1 || y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
