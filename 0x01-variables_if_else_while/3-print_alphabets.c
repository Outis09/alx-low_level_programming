#include <stdio.h>

/**
 * main - prints alphabets in lowercase then uppercase
 * followed by a new line
 *
 * Return: (0)
 */
int main(void)
{
	char s, a;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
