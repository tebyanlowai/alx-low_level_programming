#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: pointer to string
* Return: ln
*/

int _strlen_recursion(char *s)
{
int ln = 0;

if (*s > '\0')
{
ln += _strlen_recursion(s + 1)  1;
}
return (ln);
}
