#include "main.h"

/**
* _strpbrk -  searches a string for any of a set of bytes.
* @s: string
* @accept: string to match
* Return: a pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int tr, ktr;
char *p;
tr = 0;
while (s[tr] != '\0')
{
ktr = 0;
while (accept[ktr] != '\0')
{
if (accept[ktr] == s[tr])
{
p = s[tr];
return (p);
}
ktr++;
}
tr++;
}
return (0);
}
