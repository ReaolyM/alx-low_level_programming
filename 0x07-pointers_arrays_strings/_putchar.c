#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char to stdout
 * @c: the character to print
 *
 * on success, return 1
 * on error, return 0 and errno is set appropriately
*/

int _putchar(char c)
{
return (write(1,&c,1));
}
