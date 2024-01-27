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
int i;
va_list nb;

va_start(nb, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(nb, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nb);
}
