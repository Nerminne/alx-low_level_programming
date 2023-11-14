#include "main.h"
/**
 * _abs - calc the absolute value of number
 * @n: number to get its abs value
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
