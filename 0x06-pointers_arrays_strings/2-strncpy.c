#include "main.h"
#include <string.h>
/**
 *_strncp - copies count characters of string2 to string1
 *@dest:first parameter
 *@src: second parameter
 *@n: third parameter
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
