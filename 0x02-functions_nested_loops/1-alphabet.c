#include "main.h"
/*Header */
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0 if success.
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
