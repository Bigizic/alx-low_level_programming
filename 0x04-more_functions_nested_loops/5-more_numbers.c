#include "main.h"
/*header*/
/**
* more_numbers - function
*
* Description: print numbers with _putchar
* Return: void
*/
void more_numbers(void)
{
int i, a, n, b;

for (n = 0; n <= 10; n++)
{
for (i = 0; i <= 14; i++)
{
a = i / 10;
b = i % 10;

if (i > 9)
{
_putchar(a + '0');
}
_putchar(b + '0');
}
_putchar('\n');
}
}
