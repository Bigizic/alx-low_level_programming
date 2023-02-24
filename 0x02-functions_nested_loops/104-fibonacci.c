#include <stdio.h>
#define LARGEST 10000000000
/*header*/

/**
* main - main block
* Return: 0
*/
int main(void)
{
unsigned long int zero = 0, one = 1, zz = 0, two = 2;
unsigned long int u1, u2, u3;
int x;

printf("%lu, %lu, ", one, two);
for (x = 2; x < 98; x++)
{
if (one + two > LARGEST || zz > 0 || zero > 0)
{
u1 = (one + two) / LARGEST;
u2 = (one + two) % LARGEST;
u3 = zero + zz + u1;
zero = zz, zz = u3;
one = two, two = u2;
printf("%lu%010lu", zz, two);
}
else
{
u2 = one + two;
one = two, two = u2;
printf("%lu", two);
}
if (x != 97)
printf(", ");
}
printf("\n");
return (0);
}
