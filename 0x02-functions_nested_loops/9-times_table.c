#include "main.h"
/**
 * time_table - prints 9 times table, starting from 0
 */
void times_table(void)
{
	int num, mult, prod;

	num = 0;
	while (num <= 9)
	{
		_putchar('0);
		mult = 1;
		while (mult <= 9)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;
	
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod /10) + '0');

			-putchar((prod % 10) + '0');
			mult++;
		}
		_putchar('\n');
		num++;
	}
}
