#include "main.h"

/**
 * checker - check for the condition using recursion
 * @n: input number to square root
 * @i: local variable to make the check
 * Return: return value of the square root
 */

int checker(int n, int i)
{
	if (n / i == i && n % i == 0)
		return (i);

	else if (i == n)
		return (-1);

	return checker(n, i + 1);
}

/**
 * _sqrt_recursion - make the final decision
 * @n: input number to square root
 * Return: -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	if ( n <= 0)
		return (-1);
	if ( n == 1)
		return (1);
	return (checker(n, 2));
}
