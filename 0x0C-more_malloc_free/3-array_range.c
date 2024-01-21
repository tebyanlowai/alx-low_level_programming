#include "main.h"

/**
* array_range - creates an array of integers.
* @min: minimum int
* @max: max int
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
int leng, i;
int *ptr;

if (min > max)
return (NULL);

leng = max - min + 1;
ptr = malloc(sizeof(int) * leng);

if (!ptr)
return (NULL);

for (i = 0; i < leng; i++)
ptr[i] = min++;

return (ptr);
}
