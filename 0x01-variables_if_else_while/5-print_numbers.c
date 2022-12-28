#include <stdio.h>

/**
 * main - prints digits from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	char s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
