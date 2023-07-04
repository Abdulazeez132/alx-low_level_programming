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
	int i = 0;
	int char_index = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			char_index = i;
			break;
		}

		i++;
	}

	if (char_index)
	{
		return (&s[char_index]);
	}

	else
	{
		return (NULL);
	}
}
