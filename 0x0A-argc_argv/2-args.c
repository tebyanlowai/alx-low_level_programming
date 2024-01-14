#include <stdio.h>

/**
* main - prints all arguments it receives.
* @argc: number of arguments.
* @argv: array of arguments
* Return: 0
*/

int main(int argc, char const *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
