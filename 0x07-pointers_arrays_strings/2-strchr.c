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
	int char_index = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			char_index = i;
			break;
		}
	}

	if (char_index)
		return (&s[char_index]);

	else
		return (NULL);
}
