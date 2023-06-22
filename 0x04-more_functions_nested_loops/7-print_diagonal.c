#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - a function that print diagonal line
 *@n: the number
*/
void print_diagonal(int n)
{
if (n > 0)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < 0; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
