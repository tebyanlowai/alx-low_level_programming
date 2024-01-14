#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program that adds positive numbers.
* @argc: number of arguments.
* @argv: array of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
int sum, i, k = 0;

for (i = 1; i < argc; i++)
{
for (k = 0; argv[i][k] != '\0'; k++)
{
if (!isdigit(argv[i][k]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
