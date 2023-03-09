#include "main.h"
#include <stdio.h>
/*header*/


/**
* prime - check for prime number ..
* @x: int type ..
* @n: int type ..
* Return: 0 if success ..
*/

int prime(int x, int n)
{
if (n == x)
{
return (1);
}
else if (n % x == 0)
{
return (0);
}
return (prime(x + 1, n));
}

/**
* is_prime_number - returns 1 if input is a prime number else return 0.
* @n: int type ..
* Return: 0 if success ..
*/
int is_prime_number(int n)
{
if (n == 1 || n < 0)
{
return (0);
}
return (prime(2, n));
}
