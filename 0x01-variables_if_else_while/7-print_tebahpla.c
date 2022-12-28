#include <stdio.h>

/**
 * main - prints the alphabets in reverse,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; s--)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
