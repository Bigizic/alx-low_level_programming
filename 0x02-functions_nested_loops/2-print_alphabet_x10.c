#include "main.h"
/*header */
/**
* print_alphabet_10 - Print alphabet in lowercase 10 times..
* Return: 0 if success.
*/
void print_alphabet_10(void)
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
