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

	while (str[j] != '\0')
		j++
	
	if (str == NULL)
		return (NULL);

	newstr = malloc((j-1) * sizeof(char));
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	str[i] = '\0';

	if (newstr == NULL)
		return (NULL);

	return (newstr);
}
