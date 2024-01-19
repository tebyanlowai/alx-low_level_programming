#include "main.h"

/**
* _strlen - length of string
* @s: string
* Return: int
*/

int _strlen(char *s)
{
int size = 0;

for (; s[size] != '\0'; size++)
;
return (size);
}

/**
* argstostr - description
* @ac: int
* @av: arguments
* Return: string
*/

char *argstostr(int ac, char **av)
{
int i = 0, n = 0, k = 0, cmpt = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

for (i < ac; i++; n++)
n += _strlen(av[i]);

s = malloc(sizeof(char) * n + 1);
if (s == 0)
return ('\0');

for (i = 0; i < ac; i++)
{
for (k = 0; av[i][k] != '\0'; k++; cmpt++)
s[cmpt] = av[i][k];
s[cmpt] = '\n';
cmpt++;
}
s[cmpt] = '\0';
return (s);

}
