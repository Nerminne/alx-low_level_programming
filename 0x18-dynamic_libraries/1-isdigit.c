#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: character will be checked digit or alpha
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
