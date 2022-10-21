#include "main.h"
/**
 * print_numbers -from 0 - 9
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
		_putchar(num + '0');

	_putchar('\n');
}
