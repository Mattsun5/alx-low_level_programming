#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointer by src,
 * including the terminator null byte, to the =
 * buffer pinter to by dest.
 * @dest: destination
 * @src: source
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) - *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
