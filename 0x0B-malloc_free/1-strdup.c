#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: input string
 * Return: returns pointer to a new string
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *newstr;
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	i += 1;

	newstr = malloc(i * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	while (str[j] != '\0')
		newstr[j] = str[j];
	return (newstr);
}
