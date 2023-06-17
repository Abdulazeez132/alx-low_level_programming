#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program check the last digit of random number'
 *
 * Return: Always 0(successful)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	/*checking the last digit*/
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}

	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0 \n", n, l);
	}

	else if (l < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
