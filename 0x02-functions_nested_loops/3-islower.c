#include "main.h"

/**
 * _islower - 'checks for lowercase character'
 *
 * @c: 'c is the letter to look for'
 *
 * Return: 'returns 1 if c is found, else 0'
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
