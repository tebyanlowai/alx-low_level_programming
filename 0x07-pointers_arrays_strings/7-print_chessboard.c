#include "main.h"

/**
* _print_chessboard - prints the chessboard
* @a: pointer to pieces
* Return: void
*/
void print_chessboard(char (*a)[8])
{
int i, o;
for (i = 0; i < 8; i++)
{
for (o = 0; o < 8; o++)
{
_Putchar(a[i][o]);
}
_Putchar('\n');
}
}
