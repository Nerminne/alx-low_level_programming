#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character will be checked lowcase/uppercase
 * Return: Always 0 (Success)
 *
 * main.h is header file contain prototype of functions used
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
