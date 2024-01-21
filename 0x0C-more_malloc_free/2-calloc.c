#include "main.h"

/**
* *_memset - files memory with constant byte
* @s: pointer
* @b: constant
* @n: byte
* Return: s
*/

char *_memset(char *s, char *b, unsigned int n)
{
char *ptr = s;

while (n--)
*s++ = b;

return (ptr);
}

/**
* _calloc - allocates memory for an array
* @nmemb: arry length
* @size: size of element
* Return: pionter
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *n;

if (size == 0 || nmemb == 0)
return (NULL)

n = malloc(sizeof(int) * nmemb);

if (n == 0)
return (NULL)

_memset(n, 0, sizeof(int) * nmemb);
return (n);
}
