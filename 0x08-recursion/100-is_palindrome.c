#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}
/**
 * palindrome_or_not - check for is_palindrome
 * @str: string
 * @len: length of string
 * @count: counter
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int palindrome_or_not(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (palindrome_or_not(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - check string is empty or not
 * @s: string
 * Return: 1 if empty 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	int count = 0;

	return (palindrome_or_not(s, len - 1, count));
}
