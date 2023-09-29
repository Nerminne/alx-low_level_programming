#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number in decimal
 * @index: index starting from 0 of the bet u want to get
 * Return: bit of given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);
	return ((n >> index) & 1);
}
