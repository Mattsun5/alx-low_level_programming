#include <stdio.h>
/**
 * main - entry point
 * Return - 0 when successful
 */
int main(void)
{
	unsigned char num;

	num = 0;
	while (num < 10)
	{
		putchar(num);
		num++;
	}
	return (0);
}
