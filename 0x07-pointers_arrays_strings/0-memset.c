#include "main.h"

/**
 * _memset - fill the memory with a constant byte
 *
 * @s: input memory address to fill
 *
 * @b: input to fill in
 *
 * @n: input number of memory to fill
 *
 * Return: the constant byte s
 */

char _memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	
	return (s);
}
