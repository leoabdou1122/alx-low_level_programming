#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - a function that print a string in reverse.
 *@s: the string
*/
void print_rev(char *s)
{
int l;
int i;
l = strlen(s);
for (i = l - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
