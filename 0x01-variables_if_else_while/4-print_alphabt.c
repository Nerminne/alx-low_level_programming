#include <stdio.h>
/**
 * main - Entry point
 *
 * Description :  prints the alphabet in lowercase expect q and e
 *
 * Return: Always (0) (Success)
 *
 * betty style doc for function main goes there
*/
int main(void)
{
	char alpha_ch;

	for (alpha_ch = 'a'; alpha_ch <= 'z'; alpha_ch++)
		if (alpha_ch != 'q' && alpha_ch != 'e')
			putchar(alpha_ch);
	putchar('\n');
	return (0);
}
