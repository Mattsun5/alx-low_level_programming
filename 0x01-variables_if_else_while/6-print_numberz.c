#include <stdio.h>
/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
