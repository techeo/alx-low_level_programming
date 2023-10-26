#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number.
 * @n: the number to check.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
    return is_prime_recursive(n, 2);
}

/**
 * is_prime_recursive - checks if an integer is a prime number recursively.
 * @n: the number to check.
 * @divisor: current divisor to check for divisibility.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_recursive(int n, int divisor)
{
    if (n <= 1)
        return 0;  /* 0 and 1 are not prime */

    if (divisor * divisor > n)
        return 1;  /* If no divisors are found, it's prime */

    if (n % divisor == 0)
        return 0;  /* If it's divisible by any number, it's not prime */

    return is_prime_recursive(n, divisor + 1);  /* Check the next divisor */
}

