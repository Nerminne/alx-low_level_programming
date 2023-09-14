#include "3-calc.h"
/**
 * op_add - function that add two int
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b)
}
/**  
 * op_add - function that subtract two int
 * @a: first int
 * @b: second int
 * Return: result of subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - returns product of two numbers.
  *@a: first int
  *@b: second int
  *Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - returns the division of two numbers.
  *@a: first int
  *@b: second int
  *Return: a divided by b
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
  *op_mod - returns the remainder of division.
  *@a: first int
  *@b: second int
  *Return: remainder of division
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
