#include <stdio.h>
/**
 * main - entry point of program
 * Return: 0 when successful
 */
int main(void)
{
	char alphabet_lower;
	char alphabet_upper;

	alphabet_lower = 'a';
	alphabet_upper = 'A';
	while (alphabet_lower <= 'z')
	{
		putchar(alphabet_lower);
		alphabet_lower++;
	}
	while (alphabet_upper <= "Z")
	{
		putchar(alphabet_upper);
		alphabet_upper++;
	}
	printf("\n");
	return (0);
}
