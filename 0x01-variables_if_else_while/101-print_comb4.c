#include <stdio.h>
/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	while (num1 < 8)
	{
		num2 = num1 + 1;
		while (num2 < 9)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');
				if (num1 == 7 && num2 == 8 && num3 == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
