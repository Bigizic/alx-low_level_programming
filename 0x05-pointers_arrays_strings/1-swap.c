#include "main.h"
#include <stdio.h>
/*header*/

/**
* swap_int - swaps the value of two integers ..
* @a: type int ..
* @b: type int ..
* Return: 0 if success ..
*/

void swap_int(int *a, int *b)
{
int m = *a;
*a = *b;
*b = m;

return;
}
