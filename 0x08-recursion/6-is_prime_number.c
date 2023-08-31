#include "main.h"
#include <stdio.h>
/**
 * prime_or_not - check if numb is prime factor
 * @factor: checker
 * @n: number to find its square root
 * Return: natural square root of number base
 */
int prime_or_not(int n, int factor)
{
	if ((n % factor == 0 && factor != n) || (n < 2))
		return (0);
	if (factor < n)
		return (prime_or_not(n, factor + 1));
	return (1);
}
/**
 * is_prime_number - returns 1 if numb is a prime number
 * @n: number
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	return (prime_or_not(n, 2));
}
