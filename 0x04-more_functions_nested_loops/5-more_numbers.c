#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 in 10times
 */

void more_numbers(void)
{
	int i, j;
	j = 1;
	
	while (j <= 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
