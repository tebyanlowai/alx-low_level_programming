#include "main.h"

/**
* _strlen - returns the length of a string
* using the input parameter
*
* @s: string parameter input
*
* Return: length of string
*/

int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
++counter;

retern(counter);
}
