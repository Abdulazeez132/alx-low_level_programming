#include "main.h"

/**
 * _isupper - check for uppercase letter
 *
 * @c: c is the letter given
 *
 * Return: returns 1 if present, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
