#include <stdio.h>
/*header*/

/**
* main - finds and prints the sum of even valued terms..
* Return: 0 if success..
*/

int main(void)
{
int i = 1, x = 2, b = 0;
int o;
while (x < 4000000)
{
if (x % 2 == 0)
b +=x;
o = x;
x += i;
i = o;
}
printf("%d\n", b);
return (0);
}
