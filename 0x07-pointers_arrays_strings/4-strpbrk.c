#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a pinter to the byte in s that matches one of the 
 * bytes in acccept, or NULL if no such is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accepr + j))
				return (s + i);
		}
	}
	return ('\0');
}
