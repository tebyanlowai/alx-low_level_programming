#include "variadic_functions.h"

/**
* print_strings - function that prints strings
* @separator: string separator
* @n: numbers
* @...: string to print
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list string;
va_start(string, n);
for (i = 0; i < n; i++)
{
str = va_arg(string, char *);
if (str == NULL)
printf("nil");
else
printf("%s", str);
if (i != (n- 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(string);
}
