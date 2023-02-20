#include <stdio.h>
/*header*/

/**
* main - loop through variables a, b and c printing digits..
*
* Return: 0 if success..
**/

int main(void)
{
int a = '0';
int b = '1';
int c;
while (a <= '9')
{
while (b <= '9')
{
c = b + 1;

while (c <= '9')
{
putchar(a);
putchar(b);
putchar(c);

if (c)
{
putchar(',');
}

c++;
};
b++;
};

a++;
}
}
