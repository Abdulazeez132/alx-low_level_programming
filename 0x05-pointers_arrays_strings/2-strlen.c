#include "main.h"

/**
 * _strlen - return length of string
 *
 * @s: string to measure
 *
 * Return: returns the lenth of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
