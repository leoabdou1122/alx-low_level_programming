#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - A program that print 0 - 9 using putchar
 *Return: 0
*/
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
