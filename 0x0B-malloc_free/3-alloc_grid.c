#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: int
* @height: int
* Return: 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
int **top, i, k;
top = malloc(sizeof(*top) * height);

if (width <= 0 || hieght <= 0 || top <= 0)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
top[i] = malloc(sizeof(**top) * width);
if (top[i] == 0)
{
while (i--)
free(top[i]);
free(top);
return (NULL);
}

for (k = 0; k < width; k++)
top[i][k] = 0;
}
}

return (top);
}
