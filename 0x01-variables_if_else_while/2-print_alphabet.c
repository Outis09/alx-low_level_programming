#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * followed by a new line
 *
 * Return: (0)
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
