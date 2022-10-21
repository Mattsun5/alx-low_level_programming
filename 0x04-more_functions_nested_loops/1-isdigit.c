#include "main.h"
/**
 * _isdigit - checks for a digit from 0 - 9
 * @c: number to check
 * Return: 1 if true, 0 othewise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
