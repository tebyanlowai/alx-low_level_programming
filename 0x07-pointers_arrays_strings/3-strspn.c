#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept: byte
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int tr, ktr;
for (tr = 0; s[tr] != '\0'; tr++)
{
for (ktr = 0; accept[ktr] != s[tr]; ktr++)
{
if (accept[ktr] == '\0')
return (tr);
}
}
return (tr);
}
