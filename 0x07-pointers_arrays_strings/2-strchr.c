#include "main.h"
#include <stdio.h>
/**
* _strchr - locates a character
* @s: string to check
* @c: character to found
* Pointer/memory incrementation instead of i
*
* Return: pointer to s or null
*/
char *_strchr(char *s, char c)
{
while (*s)
{
s++;
if (*s == c)
{
return (s);
}
}
return (0);
}
