#include <stdio.h>
/**
 * main - prints all args it receives
 * @argc: number of cmd args
 * @argv: array that contains the program cmd args
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
