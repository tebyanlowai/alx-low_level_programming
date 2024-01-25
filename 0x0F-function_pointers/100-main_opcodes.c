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

int main(int argc, char **argv)
{
char *p = (char *)main;
int b;

if (argc != 2)
printf("Error\n"), exit(1);

b = atoi(argv[1]);
if (b < 0)
printf("Error\n"), exit(2);

while (b--)
printf("%02hhx%s\n", *p++, b ? " " : "\n");

return (0);
}
