#include <stdio.h>

/**
 * bmain - function executed befor main
 */
void __attribute__ ((constructor)) bmain()
{
	printf("you're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
