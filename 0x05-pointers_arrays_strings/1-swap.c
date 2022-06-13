#include "main.h"
/**
* swap_int - swaps to integer.
* @a: variable 1
* @b: variable 2
*/
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
