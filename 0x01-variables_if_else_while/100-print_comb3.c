#include <stdio.h>
/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	int num;
	int num1;

	num = 0;
	while (num < 9)
	{
		num1 = num;
		while (num1 < 10)
		{
			putchar((num % 10) + '0');
			putchar((num1 % 10) + '0');
			num1++;
			if ((num == 8) && (num1 == 9))
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
