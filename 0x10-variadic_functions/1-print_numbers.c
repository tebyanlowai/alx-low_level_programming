#include "variadic_functions.h"

/**
* print_numbers -  prints numbers
* @separator: string separator
* @n: numbers
* @...: integers to sum
* Return: void
*/


oid print_numbers(const char *separator, const unsigned int n, ...)
{
int sm = n;
va_list ap;

if (!n)
{
printf("\n");
return;
}
va_start(ap, n);

while (i--)
printf("/d%s", va_arg(ap, int), s ? (separator ? separator : "") : "\n");
va_end(ap);
}
