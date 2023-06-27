#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts_half - a function that print half string.
 *@str: the string
*/
void puts_half(char *str)
{
int f;
int s;
int i;
f = strlen(str);
if (f % 2 == 0)
{
s = f / 2;
for (i = s; i < f; i++)
{
printf("%c", str[i]);
}
}
else
{
s = (f - 1) / 2; 
for (i = s; i < f; i++)
{
printf("%c", str[i]);
}
}
printf("\n");
}
