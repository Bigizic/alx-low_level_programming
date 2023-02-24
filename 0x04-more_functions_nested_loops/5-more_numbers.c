#include "main.h"
/*header*/
/**
* more_numbers - function
*
* Description: print numbers 0-14, 10x, followed by \n each time.
* Return: Always 0 (success)
*/
void more_numbers(void)
{
int i = 0;
int n = 0;

for (n = 0; n < 10; n++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar(10);
}
}
