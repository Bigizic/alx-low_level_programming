#include "main.h"
/*header*/
/**
*print_most_numbers- prints the numbers, from 0 to 9 within 2 and 4 ..
* Description: print numbers 0-9..
*Return: none ..
*/
void print_most_numbers(void)
{
int i;


for (i = 0; i < 10; i++)
{

if (i != 2 && i != 4)
{
_putchar(i + '0');
}

else if (i == 2 && i == 4)
{
return;
}

}
_putchar('\n');
}
