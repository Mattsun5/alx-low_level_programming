#include "main.h"
/**
 * print_square - square using #
 * @size: the size of square
 */
void print_square(int size)
{
	int ht, wd;

	if (size > 0)
	{
		for (ht = 0; ht < size; ht++)
		{
			for (wd = 0; wd < size; wd++)
				_putchar('#');
			if (ht == size - 1)
				break;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
