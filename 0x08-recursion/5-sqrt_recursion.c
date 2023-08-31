#include "main.h"
#include <stdio.h>
/**
 * guess_root - check root for num
 * @guess: checker
 * @n: number to find its square root
 * Return: natural square root of number base
 */
int guess_root(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (guess_root(n, guess + 1));
}

/**
 * _sqrt_recursion - that returns the natural square root of a number
 * @n: number to find its square root
 * Return: natural square root of number base
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = guess_root(n, 1);
	return (sqrt);
}
