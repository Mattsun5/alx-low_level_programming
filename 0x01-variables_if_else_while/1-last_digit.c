#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d", n, last_digit);
	if (n > 5)
	{
		printf(" and is greater than 5");
	}
	else
	{
		if ((n < 6) && (n != 0))
		{
			printf(" and is less than 6 and not 0");
		}
		else
		{
			printf(" and is 0");	
		}
	}
	return (0);
}
