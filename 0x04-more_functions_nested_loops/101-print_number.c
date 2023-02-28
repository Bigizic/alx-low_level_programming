#include "main.h"
#include <stdio.h>

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */


void print_number(int n)
{

if(i/10!=0)
{
putchar(i%10);
printnumber((i-i%10)/10);
}
if ( i > 0 )
{
putchar(i%10 + '0');
}
else
{
putchar(-i%10 + '0'); 
}
}
else if((i/10==0) && (i%10!=0) && (i>0))
{
putchar(i%10 + '0');
}
else if((i/10==0) && (i%10!=0) && (i<=0))
{

putchar('-');
putchar(-i%10+'0');
}    

