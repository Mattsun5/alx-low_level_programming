#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the entry point of program
 * Return: gives 0 to indicate success
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%s", n);
		printf(" is negative\n");
	}
	else
		if (n > 0)
		{
			printf("%s", n);
			printf(" is positive\n");
		}
		else
		{
			printf("%s", n);
			printf(" is zero\n");
		}
	return (0);
}
