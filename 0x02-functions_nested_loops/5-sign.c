#include "main.h"

/**
 * print_sign - prints the sign for given num if > 1, print +
 *
 * @n: is the given parameter
 *
 * Return: return 1 if num > 0 else -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
