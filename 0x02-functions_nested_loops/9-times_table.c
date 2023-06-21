#include "main.h"
#include <stdio.h>
/**
 *times_table - a function that print multiplication table
*/
void times_table(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int d;
d = i * j;
if (j == 0)
{
printf("%d,", d);
}
else
{
if (d < 10)
{
if (j == 9)
{
printf("  %d", d);
}
else
{
printf("  %d,", d);
}
}
else
{
if (j == 9)
{
printf(" %d", d);
}
else
{
printf(" %d,", d);
}
}
}
}
printf("\n");
}
}
