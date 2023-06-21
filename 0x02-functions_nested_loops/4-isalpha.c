#include "main.h"

/**
 * _isalpha - 'checks for any alpha either uppercase or lowercase'
 *
 * @c: 'c is the parameter to check for'
 *
 * Return: 'returns 1 if found, else 0'
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
