#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - a program that prints the opcodes
* of its own main function.
* @argc: number of arguments
* @argv: argument vector
* Return: always 0
*/

int main(int argc, char *argv[])
{
int b, i;
char *p;

if (argc != 2)
{
printf("Error\n"); 
exit(1);
}

b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n"); 
exit(2);
}

p = (char *)main;
for (i = 0; i < b; i++)
{
if (i == b - 1)
{
printf("%02hhx%s\n", argv[i]);
break;
}
printf("%02hhx%s\n", argv[i]);
}
return (0);
}
