#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i;
	char s;

	for (i = 0; i <= 9; i++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
	_putchar('\n');
	}
}
