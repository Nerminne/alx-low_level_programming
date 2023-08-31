#include <stdio.h>
/**
 * _sqrt_recursion - that returns the natural square root of a number
 * @n: number to find its square root
 * guess_root - check root for num
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

int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = guess_root(n, 1);
	return (sqrt);
}
