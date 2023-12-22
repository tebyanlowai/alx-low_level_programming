#include <stdlib.h>
#include "main.h"
/**
 * main - Entery Point
 * Return: Always 0 (Success)
*/
void postitive_or_negative(int i)
{
if (i > 0)
printf("%i is positive\n", i);
else if (i == 0)
printf("%i is zero\n", i);
else
printf("%i is negative\n", i);
return (0);
}
