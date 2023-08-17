#include "main.h"
/**
 * _isupper - checks for upper character
 * @c: character will be checked lowcase/uppercase
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
