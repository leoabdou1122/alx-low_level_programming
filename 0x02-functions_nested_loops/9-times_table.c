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
printf("%d,  ", d);
}
printf("\n");
}
}
