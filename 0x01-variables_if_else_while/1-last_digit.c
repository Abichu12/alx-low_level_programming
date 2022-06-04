#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0
*
*/
int main(void)  
{
int n;
int L;
char str[] = "Last digit of";
srand(time(0));
n = rxand() - RAND_MAX / 2;
/* your code goes there */
L = n % 10;
if (L > 5)
printf("%s %d is %d and is greater than 5\n", str, n, L); 
else if (L == 0)   
printf("%s %d is %d and is 0\n", str, n, L);
else if (L < 6)
printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);
return (0);
}
