#include "main.h"
/**
 * swap_int - swaps values of 2 integers
 * @a: first argument
 * @b: secont argument
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
