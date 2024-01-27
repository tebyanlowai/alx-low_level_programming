#include "variadic_function.h"

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
int i = n;
va_list ap;

if (!n)
{
printf("\n");
return;
}
va_start(ap, n);

while (i--)
printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nill)",
s ? (separator ? separator : "") : "\n");

va_end(ap);
}
