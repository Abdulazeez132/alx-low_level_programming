#include "main.h"

/**
 * _islower - 'checks for lowercase character'
 *
 * int c - 'c is the letter to look for'
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
