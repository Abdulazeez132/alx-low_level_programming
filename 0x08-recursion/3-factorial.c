#include "main.h"

/**
 * factorial - calculate factorial of input number
 * @n: input number
 * Return: return factorial of input number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
