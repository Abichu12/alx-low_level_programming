#include "main.h"
/**
* _strpbrk - searches a string
* @s: char to check
* @accept: char to look for
*
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
