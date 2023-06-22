#include "main.h"
#include <stdio.h>
/**
 *print_line - a function that print n line
 *@n: length of line
*/
void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
