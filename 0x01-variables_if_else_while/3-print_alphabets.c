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
char b;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (b = 'A'; b <= 'Z'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
