#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: input string to measure
 * Return: return length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}

	return (i + _strlen_recursion(s + 1));
}
