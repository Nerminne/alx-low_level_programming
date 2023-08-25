#include "main.h"
/**
 * *leet - encodes a string 1337.
 * @s: pointer to string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, x;
	int ch[] = {'a', 'e', 'o', 't', 'l'};
	int num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; ch[x] != '\0'; x++)
		{
			if (s[i] == ch[x] || s[i] == ch[x] - 32)
				s[i] = (int)num[x];
		}
	}
	return (s);
}
