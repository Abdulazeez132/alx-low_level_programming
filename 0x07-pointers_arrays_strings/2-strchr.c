#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: input string
 *
 * @c: input character to find
 *
 * Return: return pointer to first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		i++;
	}

	return ("NULL");
}
