#include <stdio.h>
/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	int num;
	char alpha;

	alpha = 'a';
	num = 0;
	while (num < 10)
	{
		putchar(num);
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
