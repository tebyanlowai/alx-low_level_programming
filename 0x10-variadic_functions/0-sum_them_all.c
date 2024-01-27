#include "variadic_functions.h"

/**
* sum_them_all -  function that sum variable
* @n: number
* @...: integers
* Return: the sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
int sm = 0, i = n;
va_list ap;

if (!n)
return (0);

va_start(ap, n);
while (i--)
sm += va_arg(ap, int);
va_end(ap);
return (sm);
}
