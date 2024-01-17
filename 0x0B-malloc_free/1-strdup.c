#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string
* Return: 0
*/

char *_strdup(char *str)
{
int i = 0, size = 0;
char = *b;

if (str == NULL)
return (NULL);

for (; str[size] != '\0'; size++)
;
b = malloc(size * sizeof(*str) + 1);

if (b == 0)
return (NULL);

else
{
for (; i < size; i++)
b[i] = str[i];
}
return (b);
}
