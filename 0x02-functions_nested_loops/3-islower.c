#include "main.h"
/**
 * _islower - checks if a character is lower
 * @c: the char to check
 * Return: 1 if lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
