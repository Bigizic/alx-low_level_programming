#include <stdio.h>
/*header*/

/**
* main - prints first 50 fibonical numbers ..
* Return: 0 if success ..
*/

int main(void)
{
int co = 2;
long int i = 1, m = 2;
long int k;

printf("%lu, ", i);
while (co <= 50)
{
if (co == 50)
{
printf("%lu\n", m);
}
else
{
printf("%lu, ", m);
}

k = m;
m += i;
m = k;
co++;
}

return (0);
}
