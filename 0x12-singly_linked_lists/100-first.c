#include <stdio.h>

/**
 * bmain - function executed befor main
 */
void __attribute__ ((constructor)) hare(void);
/**
 * hare - prints a string before the
 * main function is executed.
 */
void hare(void)
{
	printf("you're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
