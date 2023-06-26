#include "main.h"
#include <stdio.h>
/**
 *_strlen - a function that return the length of a character.
 *@s: the character
 *Return: the length of the str
*/

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
