#include "main.h"
/**
 * binary_to_uint - a function that converts
 * binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int weight = 1;
	int i = 0;
	unsigned int decimal = 0;
	if (b == NULL)
		return (0);
	i = (int)strlen(b) - 1;
	while (i >= 0)
	{
		if (b[i] != '1' || b[i] != '0')
			return (0);
		if (b[i] == '1')
			decimal += weight;
		weight *= 2;
		i--;
	}
	return (decimal);
}
