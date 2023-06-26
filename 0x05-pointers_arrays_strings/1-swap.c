#include "main.h"
#include <stdio.h>

/**
 *swap_int - a function that swap a and b.
 *@a: the pointer a
 *@b: the pointer b
*/
void swap_int(int *a, int *b)
{
int z;
z = *a;
*a = *b;
*b = z;
}
