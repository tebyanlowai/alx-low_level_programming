#include "main.h"

/**
* _memcpy - copies memory area
* @dest: memory area
* @src: source
* @n: length of src to be copied
* Return: pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int itr = 0;

while (itr < n)
{
dest[itr] = src[itr];
itr++;
}

return (dest);

}
