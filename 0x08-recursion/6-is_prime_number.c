#include "main.h"

int prime_number(int n, int i);

/**
 * is_prime_number - checks if a number is a prime.
 * @n: number to be tested.
 *
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - helper function for is_prime_number.
 * @n: original number to be tested.
 * @i: number to test with.
 *
 * Return: 1 if prime, else 0
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (prime_number(n, i - 1));
	return (0);
}
