#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: input string
 * Return: returns pointer to a new string
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *newstr;

	while (str[j] != '\0')
		j++;
	
	if (str == NULL)
		return (NULL);

	newstr = malloc((j + 1) * sizeof(char));

	for (i = 0; i < j; i++)
	{
		newstr[i] = str[i];
		i++;
	}

	return (newstr);
}
