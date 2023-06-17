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

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
