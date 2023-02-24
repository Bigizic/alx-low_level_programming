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
int b;
int c;
while (a <= '7')
{
b = a + 1;
while (b <= '8')
{
c = b + 1;

while (c <= '9')
{
putchar(a);
putchar(b);
putchar(c);

if (a == '7' && b == '8' && c == '9')
{
putchar('\n');
}
else
{
putchar('\n');
putchar(' ');
}

c++;
};
b++;
};

a++;
};
return (0);
}
