#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new duplicated string
 * @str: input string
 * Return: returns pointer to a new string
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *newstr;

	for (j = 0; str[j] != '\0'; j++)
		;

	if (str == NULL)
		return (NULL);

	newstr = (char *)malloc((j + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
	free(newstr);
}
