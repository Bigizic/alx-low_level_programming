#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/*header*/

/**
* main - multiplies two numbers
* argc: int type
* argv: char type
* Return: 0 if success
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 2;
	int mul;
	int numD = 0;
	int temp;
	int k, h;
	char output[MAX_DIGITS];
	char *e = "Error";
	int num1 = atoi(argv[i]);
	int num2 = atoi(argv[j]);
	if (argc != 3)
	{
		putchar(*e);
		putchar('\n');
		exit(98);
	}
	if (!isdigit(*argv[i]) || !isdigit(*argv[j]))
	{
		putchar(*e);
		putchar('\n');
		exit(98);
	}
	mul = num1 * num2;
	if (mul == 0)
	{
		putchar('0');
	}
	else
	{
		if (mul < 0)
		{
			putchar ('-');
			mul = -mul;
		}
	numD = 0;
	temp = mul;
	while (temp > 0)
	{
		temp = temp / 10;
		numD++;
	}
	if (numD > MAX_DIGITS)
	{
		putchar(*e);
		exit(98);
	}

	for (k = numD - 1; k >= 0; k--)
	{
		output[k] = '0' + (mul % 10);
		mul = mul / 10;
	}
	for (h  = 0; h < numD; k++)
	{
		putchar(output[h]);
	}
	}
	putchar('\n');
	return (0);
}

