#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - A program that print alphabet lowercase using putchar
 *Return: 0
*/
int main(void)
{
char a;
for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
