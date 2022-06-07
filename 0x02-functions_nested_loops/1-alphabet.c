#include "main.h"
/**
* print_alphabet - Prints 10 times the alphabet, in lowercase.
*/
void print_alphabet(void)
{
int count = 0;
char alp;
while (count++ <= 9)
{
for (alp = 'a'; alp <= 'z'; alp++)
_putchar(alp);
_putchar('\n');
}
}
