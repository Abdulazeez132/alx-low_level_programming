#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with specific character
 * @size: input size of the array to create
 * @c: character to initialize the array
 * Return: returns pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL);
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
