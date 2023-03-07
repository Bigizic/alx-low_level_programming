#include "main.h"
#include <string.h>
/*header*/

/**
* print_chessboard - prints the chessboard ..
* @a: char type ..
* Return: 0 if success ..
*/

void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
