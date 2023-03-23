#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/*header*/

/**
* op_add - return the sum of a and b ..
* @a: int type ..
* @b: int type ..
* Return: 0 if success ..
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - return the difference of a and b ..
* @a: int type ..
* @b: int type ..
* Return: 0 if success ..
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - returns the product of a and b ..
* @a: int type ..
* @b: int type ..
* Return: 0 if success ..
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - returns the division of a and b ..
* @a: int type ..
* @b: int type ..
* Return: 0 if success ..
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod -  returns the remainder of the division of a and b ..
* @a: int type ..
* @b: int type ..
* Return: 0 if success ..
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
