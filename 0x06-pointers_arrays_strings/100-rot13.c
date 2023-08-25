#include "main.h"
/**
* rot13 - encoder string using rot13
* @s: pointer to string params
*
* Return: converted string
*/
char *rot13(char *s)
{
	int i, x;
	char ch1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtYyUuVvWwXxYyZz";
	char rot[] = "NnOoPpQqRrSsTtYyUuVvWwXxYyZAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; ch1[x] != '\0'; x++)
		{
			if (s[i] == ch1[x])
				(char)s[i] = rot[x];
		}
	}
	return (s);
}
