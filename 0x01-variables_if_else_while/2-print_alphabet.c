#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints alphabet in lower case'
 *
 * Return: Always 0(Successful)
 */

int main(void)
{
	char j;

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
