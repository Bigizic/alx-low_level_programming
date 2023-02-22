#include "main.h"
/*header */
/**
* main - Print alphabet in lowercase 10 times..
* Return: 0 if success.
*/
int main(void)
{
int i = 0;
char c;

while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
