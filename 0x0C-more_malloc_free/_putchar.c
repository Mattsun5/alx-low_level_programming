#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: the char to print
 * Return: 0 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
