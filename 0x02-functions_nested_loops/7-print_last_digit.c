#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - a function that print last digit
 *@a: the number
 *Return: 0
*/
int print_last_digit(int a)
{
int r;
r = a % 10;
if (r < 0)
{
r *= -1;
}
_putchar(r + '0');
return (r);
}
