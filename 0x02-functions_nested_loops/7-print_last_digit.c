#include "main.h"

/**
 * print_last_digit - 'prints the last digit of given number'
 *
 * @n: given parameter
 *
 * Return: return the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
		return last_digit;
	}

	last_digit = n % 10;
	return (last_digit);
}
