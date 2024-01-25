#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_op - printthe op
* @a: adress of the main function
* @n: number of byte
* Return: void
*/
void print_op(char *a, int n)
{
for (i = 0; i < n; i++)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");
}

/**
* main - a program that prints the opcodes
* of its own main function.
* @argc: number of arguments
* @argv: argument vector
* Return: always 0
*/

int main(int argc, char **argv)
{
int b;

if (argc != 2)
printf("Error\n"), exit(1);

b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n"), exit(2);
}

print_op((char *) main, b)
return (0);
}
