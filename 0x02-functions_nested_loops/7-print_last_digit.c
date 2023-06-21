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
printf("%d", r);
return (0);
}
