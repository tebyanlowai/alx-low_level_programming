#include "variadic_functions.h"

/**
* sum_them_all -  function that sum variable
* @n: number
* @...: integers
* Return: the sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int sum, i = n;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
