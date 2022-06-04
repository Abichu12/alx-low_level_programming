#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0
*
*/
int main(void)
{
char up;
for (up = 'a'; up <= 'z'; up++)
putchar(up);
for (up = 'A'; up <= 'Z'; up++)
putchar(up);
putchar('\n');
return (0);
}
