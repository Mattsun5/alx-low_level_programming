#include <stdio.h>
/**
 * main - prints first 50 fib mumbers from 1 and 2
 * seperated by , and space
 * Return: 0 when successful
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	count = 0;
	while (count < 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
		count++;
	}
	return (0);
}
