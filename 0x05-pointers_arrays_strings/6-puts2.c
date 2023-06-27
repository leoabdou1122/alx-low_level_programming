#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - a function .
 *@str: the string
*/
void puts2(char *str)
{
int i;
int l;
l = strlen(str);
for (i = 0; i < l; i += 2)
{
printf("%c", str[i]);
}
printf("\n");
}
