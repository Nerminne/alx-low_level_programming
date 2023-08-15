#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character will be checked lowcase/uppercase
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
