#include "main.h"
/**
* _memcpy - copy memory content
* @dest: memory allocation
* @src: memory content
* @n: content in byte
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
