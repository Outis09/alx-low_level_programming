#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase,
 * followed by a new line
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');

	return (void);
}
