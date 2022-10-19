#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++
		}
		_putchar('\n');
	}
}
