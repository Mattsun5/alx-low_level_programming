#include <stdio.h>
/**
 * main - entry of program
 * Return: 0 when successful
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	printf("\n");
	return (0);
}
