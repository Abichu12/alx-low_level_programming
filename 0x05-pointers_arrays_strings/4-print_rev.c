#include "main.h"
#include <string.h>
/**
* print_rev - string in reverse.
*
* @s: The string to be printed.
*/
void print_rev(char *s)
{
int a, b;
n = 0;  
while (s[b] != '\0')
n++;
for (a = b - 1; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
