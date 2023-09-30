#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits to flip to get the other number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0, xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
			bits++;
		xor >>= 1;
	}
	return (bits);
}
