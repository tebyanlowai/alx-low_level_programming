#include "main.h"

/**
* leet - encodes a string into 1337
*
* @c: string
*
* Return: string that is encoded
*/

char *leet(char *c)
{
char *cp = c;
char key[] = {'A', 'E', 'O', 'T', 'L'};
char value[] = {4, 3, 0, 7, 1};
unsigned int i;

while (*C)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*c == key[i] || *C == key[i] + 32)
{
*C = 48 + value[i];
}
}
c++;
}
return (cp);
}
