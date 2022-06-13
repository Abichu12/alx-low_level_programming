#include "main.h"
/**
* print_rev - string in reverse.
* @s: The string to be printed.
*/
void print_rev(char *s)
{
int ben = 0, index;
while (s[index++])
ben++;
for (index = ben - 1; index >= 0; index--)
_putchar(s[index]);
_putchar('\n');
}
