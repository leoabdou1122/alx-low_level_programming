#include "main.h"
#include <stdio.h>
/**
 *print_square - a function that print diagonal line
 *@size: the number
*/
void print_square(int size)
{
if (size > 0)
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
