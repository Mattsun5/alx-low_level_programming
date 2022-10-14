#include <stdio.h>
/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	char num;
	char alpha;

	alpha = 'a';
	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
