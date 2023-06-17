#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints alphabet in lowercase and then in uppercase'
 *
 * Return: Always 0(successful)
 */

int main(void)
{
	int i;
	char j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		j = tolower(i);
		putchar(j);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		j = i;
		putchar(j);
	}

	putchar('\n');

	return (0);
}
