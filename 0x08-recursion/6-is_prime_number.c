#include "main.h"

/**
* is_prime_number - check the input integer is a prime number.
* @on: int
* @n: int
* Return: 0 or 1
*/

int check_prime(int n, int on);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
* check_prime - check all input integer < n if they can devide it.
* @on: int
* @n: int
* Return: int
*/

int check_prime(int n, int on)
{
if (on >= n && n > 1)
return (1);

else if (n % on == 0 || n <= 1)
return (0);

else
return (check_prime(n, on + 1));
}
