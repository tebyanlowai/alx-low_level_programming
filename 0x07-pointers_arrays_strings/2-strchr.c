#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: poointer to put the constant
* @c: constant
* Return: pointer to s
*/

char *_strchr(char *s, char c)
{
int tr;
for (tr = 0; s[tr] >= '\0'; tr++)
{
if (s[tr] == c)
{
return (s + tr);
}
}

return ('\0')
}
