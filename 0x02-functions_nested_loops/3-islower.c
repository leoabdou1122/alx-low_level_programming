#include "main.h"
#include <stdio.h>

/**
 *_islower - a program that print 1 if c in lowercase
 *@c : the character to be checked
 *Return: 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
