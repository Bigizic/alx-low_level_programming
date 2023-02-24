#include "main.h"
#include <stdio.h>
#include <math.h>
/*HEADERS*/
/**
* main - main block..
* Description: Print the sum of all multiples of 3 or 5 below 1024 ..
* Return: 0 if success..
*/
int main(void)
{
int i = 1;
int t = 0;

while (i < 1024)
{
if (i % 3 == 0)
t += i;
else if (i % 5 == 0)
t += i;

i++;
}
printf("%d\n", t);

return (0);
}
