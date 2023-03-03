#include "main.h"
#include <stdio.h>
/*header*/

/**
* print_number - prints an integer ..
* @n: int type ..
* Return: 0 if success ..
*/

void print_number(int n)
{

if (i/10 != 0)
{
putchar(i%10);
printnumber((i-i%10)/10);
}
if (i > 0)
{
putchar(i%10 + '0');
}
else 
{
putchar(-i%10 + '0');
}
}
else if ((i/10 == 0) && (i%10 != 0) && (i > 0))
{
putchar(i%10 + '0');
};
else if ((i/10 == 0) && (i%10 != 0) && (i <= 0))
{
putchar('-');
putchar(-i%10 + '0');
}

