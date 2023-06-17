#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints alphabet in lowercase except q and e'
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != 'e' && j != 'q')
		{
			putchar(j);
		}
	}

	putchar('\n');

	return (0);
}
