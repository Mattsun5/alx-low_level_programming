#include "main.h"
/**
 * _strlen - lenght of a string
 * @s: string pointer to string
 * Return:lenght of the string
 */
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
