#include "main.h"

/**
 * _pow_recursion - calculate x raised to power y
 * @x: input base number
 * @y: input power
 * Return: return x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, (y-1)));
}
