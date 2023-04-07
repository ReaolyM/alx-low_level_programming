#include "main.h"
/**
 * _memset is used to fill a block of memory with a particular value
 *@s: the address of the memory to be filled
 *@n: the number of bytes to be filled
 *@b: the desired value 
 *
 * return: array with a new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n);
{
int i;
for (i=0; n>0; i++)
{
s[i]=b;
n--;
}
return (s);
}
