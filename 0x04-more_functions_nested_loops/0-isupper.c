#include "main.h"
/**
 * _isupper - checks for upper character
 * @c: character will be checked lowcase/uppercase
 * Return: 1 if uppercase 0 if lowercase
 *
 * main.h is header file contain prototype of functions used
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
