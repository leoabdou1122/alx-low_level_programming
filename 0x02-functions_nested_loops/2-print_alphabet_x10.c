#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - a program that print lowercase alphabet * 10
 *Return: 0
*/
void print_alphabet_x10(void)
{
int i;
char j;
for (i = 1; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar (j);
}
_putchar ('\n');
}
}
