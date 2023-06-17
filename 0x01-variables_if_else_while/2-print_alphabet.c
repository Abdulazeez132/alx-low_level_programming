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
	int i;
	char j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		j = tolower(i);
		putchar(j);
	}
	return (0);
}
