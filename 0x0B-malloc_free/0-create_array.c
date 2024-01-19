#include "main.h"

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: size of array
* @c: char
* Return: a pointer to the array, or NULL if it fail
*/

char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
return (0);

while (size--)
m[size] = c;

return (m);
}
