#include "main.h"
/**
 **_strcmp - function that compare two strings.
 * @s1: pointer to string to be compared
 * @s2: pointer to string to be compared
 * Return: -ve (s1<s2) +ve (s1>s2) 0(s1==s2)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
