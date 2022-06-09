#include "main.h"
#include <stdio.h>
/**
* _isupper - check for upper case
* @a: character to be checked
*
* Return: 1 if upper case, 0 if lower case
*/
int _isupper(int a)
{
if (a >= 'A' && a <= 'Z')
return 1;
else
return 0;
}
