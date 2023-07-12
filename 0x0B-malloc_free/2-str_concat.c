#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: return point to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, k, n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s3 = (char *)malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (n = 0; n < i; n++)
		s3[n] = s1[n];

	for (k = 0; k < j; k++, n++)
		s3[n] = s2[k];

	return (s3);
}
