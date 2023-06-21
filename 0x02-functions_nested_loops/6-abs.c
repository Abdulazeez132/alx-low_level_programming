#include "main.h"

/**
 * _abs - prints absolute value of the num given
 *
 * @n: is the given num
 *
 * Return: returns 0
 */

int _abs(int n)
{
	int res;
	if (n > 0)
	{
		res = n;
		_putchar(res);
	}

	else if (n == 0)
	{
		res = 0;
		_putchar(res);
	}

	else
	{
		res = n * -1;
		_putchar(res);
	}
	
	return (0);
}
