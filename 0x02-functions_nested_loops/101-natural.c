#include <stdio.h>
/**
 * main - list all the natural numbers below 1024
 * and are multiples of 3 or 5
 * Return: 0 when successful
 */
int main(void)
{
	int i, sum = 0;

	i = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sume += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
