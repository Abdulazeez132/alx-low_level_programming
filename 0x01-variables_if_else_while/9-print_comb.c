#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print combination of single-digit numbers separated with comma
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
