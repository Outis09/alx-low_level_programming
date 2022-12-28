#include <stdio.h>

/**
 * main - prints the alphabets in lowercase,
 * except e and q
 *
 * Return: 0
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s != 'q' && s != 'e')
		{
			putchar(s);
		}
	}

	return (0);
}
