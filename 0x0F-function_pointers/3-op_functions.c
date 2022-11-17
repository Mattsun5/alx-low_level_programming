#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: first num
 * @b: second num
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first nm
 * @b: second num
 * Return: differenc
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two nms
 * @a: first num
 * @b: second num
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two nums
 * @a: first num
 * @b: second num
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculate the module of two numbers
 * @a: first num
 * @b: second num
 * Return: remainder of division
 */
int op_nod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
