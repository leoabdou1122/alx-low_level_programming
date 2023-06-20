#include "main.h"
#include <stdio.h>
/**
 *_isalpha - a program that check if the character alphabet
 *@c: the character must be check
 *Return: 0
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
