#include "main.h"

/**
 * check - check for the conditions if n satisfy them
 * @n: input number to check
 * @i: local variable used to make check
 * Return: return 1 if satisfied
 */

int check(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (check(n, i + 1));
}

/**
 * is_prime_number - return final result
 * @n: input number to check
 * Return: 0 if not prime number else 1
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n <= 1)
		return (0);

	return (check(n, 3));
}
