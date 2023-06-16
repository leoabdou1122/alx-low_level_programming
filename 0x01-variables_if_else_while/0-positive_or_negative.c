#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - program that generat random digit and pritn if positif or negatif
 *Return: 0
*/
int main(void)
{
srand(time(0));
int n = rand() - RAND_MAX / 2;
printf("The number is %d\n", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
