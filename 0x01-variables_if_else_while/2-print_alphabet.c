#include <stdio.h>
/**
 * main - entry of program
 * Return: 0 when successful
 */
int main(void)
{
	char alphabet;

	while(alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet ++;
	}
	return (0);
}
