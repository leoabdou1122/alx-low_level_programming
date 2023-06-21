#include "main.h"
#include <stdio.h>
/**
 *print_times_table - function that print n tables
 *@n: the number of table
*/
void print_times_table(int n)
{
if (n > 0 || n < 15)
{
int i;
int j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int r;
r = i * j;
if (r < 10)
{
if (j == 0)
{
printf("%d,", r);
}
else if (j == n)
{
printf("   %d", r);
}
else
{
printf("   %d,", r);
}
}
else if (r >= 10 && r < 100)
{
if (j == 0)
{
printf("%d,", r);
}
else if (j == n)
{
printf("  %d", r);
}
else
{
printf("  %d,", r);
}
}
else
{
if (j == 0)
{
printf("%d,", r);
}
else if (j == n)
{
printf(" %d", r);
}
else
{
printf(" %d,", r);
}
}
}
printf("\n");
}
}
}
