#include "main.h"

/**
 * _isdigit - check for numbers 0 through 9
 *
 * @c: 'the parameter to check'
 *
 * Return: 'return 1 if c is a digit  otherwise 0'
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
