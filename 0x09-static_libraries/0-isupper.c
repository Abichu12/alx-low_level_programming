#include "main.h"
/**
* _isupper - check for upper case
* @c: character to be checked
*
* Return: 1 if upper case, 0 if lower case
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
