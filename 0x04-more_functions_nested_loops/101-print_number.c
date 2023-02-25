#include "main.h"
#include <stdio.h>

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */

void print_number(int n)
{

if (n < 0) 
{
putchar('-');
n = -n;
}

if (n == 0)
putchar('0');

if (n/10)
printnumber(n/10);

putchar(n%10 + '0');
}

int main(int argc, char** argv)
{
int n = atoi(argv[1]);
printnumber(n);
printf("\n");
}
