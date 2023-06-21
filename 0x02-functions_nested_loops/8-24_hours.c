#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - a function that print hours
 *Return: 0
*/
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i <= 21; i++)
{
for (j = 0; j <= 59; j++)
{
if (i < 10 && j < 10)
{
printf("0%d:0%d\n", i, j);
}
else if (i < 10)
{
printf("0%d:%d\n", i, j);
}
else if (j < 10)
{
printf("%d:0%d\n", i, j);
}
else
{
printf("%d:%d\n", i, j);
}
}
}
}
