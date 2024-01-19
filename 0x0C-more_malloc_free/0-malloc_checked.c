#include "main.h"

/**
* malloc_checked -  allocates memory using malloc.
* @b: int
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
int *mo = malloc(b);
if (mo == 0)
exit(98);

return (mo);
}
