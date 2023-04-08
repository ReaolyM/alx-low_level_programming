#include "main.h"
/**
 * _memcpy function copies n bytes from memory areas src to memory area dest
 * @src: where memory is copied
 * @dest: where memory is stored
 * @n: the number of bytes
 *
 * return: coiped memory with n bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n);
{
int a=0;
int i=n;

for (; a<i; a++)
{
dest[a]=src[a];
n--;
}
return (dest);
}
